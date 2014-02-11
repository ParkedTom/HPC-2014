#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>
#include <stdint.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#define BUFFER_SIZE 512
#define LINE_LENGTH 40


int main(int argc, char *argv[])
{	
	
	if(argc<2)
	{
		fprintf(stderr, "%s : Not enough input arguments.\n", argv[0]);
		exit(1);
	}
	
	FILE * coeffs_file;
	char ch_coeff[LINE_LENGTH];
	fpos_t start;
	double * coeffs_buffer;
	double * fir_left_buffer;
	double * fir_right_buffer;
	int no_coeffs = 0;
	int ch;
	int ptr = 0;
	int ptr_tmp;
	double fir_out_left;
	double fir_out_right;

	
	/*following code taken and modified *slightly* from http://stackoverflow.com/questions/4278845/count-the-lines-of-a-file-in-c */
	
	coeffs_file = fopen(argv[1],"r");
	fgetpos(coeffs_file, &start);
	while(EOF != (ch=fgetc(coeffs_file)))
	{
		if (ch=='\n')
		{
			no_coeffs++;
		}

	}
	fsetpos(coeffs_file,&start);
	
	coeffs_buffer = (double *)calloc(no_coeffs,sizeof(double));
	fir_left_buffer = (double *)calloc(no_coeffs, sizeof(double));
	fir_right_buffer = (double *)calloc(no_coeffs, sizeof(double));	

	for (int i=0;i<no_coeffs;i++)
	{
		int read = fgets(ch_coeff,LINE_LENGTH,coeffs_file);
		if(read<0)
		{
			fprintf(stderr, "%s : Read from %s failed, error=%s.", argv[0],argv[1],strerror(errno));			
		}else if(read==0){
			break;
		}else{
			coeffs_buffer[i] = atof(ch_coeff);
		}
	}


	while(1){
		// created input/output buffer
		int16_t * in_buffer;
		int16_t * out_buffer;
		int16_t * left_buffer;
		int16_t * right_buffer;
		
		in_buffer = (int16_t *) calloc(2*BUFFER_SIZE, sizeof(int16_t));
		out_buffer = (int16_t *) calloc(2*BUFFER_SIZE, sizeof(int16_t));
		left_buffer = (int16_t *) calloc(BUFFER_SIZE, sizeof(int16_t));
		right_buffer = (int16_t *) calloc(BUFFER_SIZE, sizeof(int16_t));
		
		unsigned cbBuffer=2*BUFFER_SIZE*sizeof(int16_t);	// size in bytes of 
		
		// Read one sample from input
		int got1=read(STDIN_FILENO,in_buffer,cbBuffer);
		if(got1<0){
			fprintf(stderr, "%s : Read from %s failed, error=%s.", argv[0], argv[1], strerror(errno));
			exit(1);
		}else if(got1==0){
			break;	 // end of file
		}
		

		for(int i=0;i<BUFFER_SIZE;i++) //split input into left and right channel
		{
			left_buffer[i] = in_buffer[2*i];
			right_buffer[i] = in_buffer[2*i + 1];
		}
		
		for(int i=0;i<BUFFER_SIZE;i++)
		{
			fir_out_left = 0;
			fir_out_right = 0;
			fir_left_buffer[ptr] = (double)left_buffer[i];
			fir_right_buffer[ptr] = (double)right_buffer[i];
			
			ptr_tmp = ptr;

			for(int k=0;k<no_coeffs;k++)
			{
				fir_out_left = fir_out_left + fir_left_buffer[ptr_tmp]*coeffs_buffer[k];
				fir_out_right = fir_out_right + fir_right_buffer[ptr_tmp]*coeffs_buffer[k];
				if(ptr_tmp == 0)
				{
					ptr_tmp = no_coeffs - 1;
				}else{
					ptr_tmp--;
				}
			}
			out_buffer[2*i] = (int16_t)fir_out_left;
			out_buffer[2*i+1] = (int16_t)fir_out_right;

			ptr++;
			if(ptr == no_coeffs)
			{
				ptr = 0;
			}
		}

		// Copy one sample to output
		int done=write(STDOUT_FILENO,out_buffer, cbBuffer);
		if(done<0){
			fprintf(stderr, "%s : Write to stdout failed, error=%s.", argv[0], strerror(errno));
			exit(1);
		}
	}
	fclose(coeffs_file);
	

	return 0;
}
