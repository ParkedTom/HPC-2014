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

int main(int argc, char *argv[])
{	
	
	if(argc<3)
	{
		fprintf(stderr, "%s : Not enough input arguments.\n", argv[0]);
		exit(1);
	}
	
	int f1;
	int f2;
	
	f1 = open(argv[1], O_RDONLY);
	f2 = open(argv[2], O_RDONLY);

	while(1){
		// Buffer containing one sample (left and right, both 16 bit).
		int16_t * f1_samples;
		int16_t * f2_samples;
		int16_t * out_buffer;
		
		f1_samples = (int16_t *) calloc(2*BUFFER_SIZE, sizeof(int16_t));
		f2_samples = (int16_t *) calloc(2*BUFFER_SIZE, sizeof(int16_t));
		out_buffer = (int16_t *) calloc(2*BUFFER_SIZE, sizeof(int16_t));
		unsigned cbBuffer=2*BUFFER_SIZE*sizeof(int16_t);	// size in bytes of 
		
		// Read one sample from input
		int got1=read(f1,f1_samples,cbBuffer);
		if(got1<0){
			fprintf(stderr, "%s : Read from %s failed, error=%s.", argv[0], argv[1], strerror(errno));
			exit(1);
		}else if(got1==0){
			break;	 // end of file
		}
		

		int got2=read(f2,f2_samples, cbBuffer);
                if(got2<0){
                        fprintf(stderr, "%s : Read from %s failed, error=%s.", argv[0], argv[2], strerror(errno));
                        exit(1);
                }else if(got2==0){
                        break;   // end of file
                }

		for(int i=0;i<2*BUFFER_SIZE;i++)
		{
			out_buffer[i] = (f1_samples[i] + f2_samples[i])/2;
		}

		// Copy one sample to output
		int done=write(STDOUT_FILENO, out_buffer, cbBuffer);
		if(done<0){
			fprintf(stderr, "%s : Write to stdout failed, error=%s.", argv[0], strerror(errno));
			exit(1);
		}
	}
	close(f1);
	close(f2);

	return 0;
}
