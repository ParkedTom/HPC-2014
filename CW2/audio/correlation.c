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


int main(int argc, char *argv[])
{
	int window_size;
	int f1;
	int f2;
	double f1_RMS = 0;
	double f2_RMS = 0;
	double rnum = 0;
	double rdenom = 0;
	double r;
	double f1_sq_sum = 0;
	double f2_sq_sum = 0;
	
	if(argc<4)
	{
		fprintf(stderr, "%s : Not enough input arguments.\n", argv[0]);
		exit(1);
	}
	
	f1 = open(argv[1], O_RDONLY);
	f2 = open(argv[2], O_RDONLY);
	window_size = atoi(argv[3]);
	
    
    
    
	while(1){
		// Buffer containing one sample (left and right, both 16 bit).
        int16_t * f1_samples;
        int16_t * f2_samples;
        double * f1_mono_buffer;
        double * f2_mono_buffer;
        
        f1_samples = (int16_t *) calloc(2*window_size, sizeof(int16_t));
        f2_samples = (int16_t *) calloc(2*window_size, sizeof(int16_t));
        f1_mono_buffer = (double *) calloc(window_size, sizeof(double));
        f2_mono_buffer = (double *) calloc(window_size, sizeof(double));
		
		unsigned cbBuffer=2*window_size*sizeof(int16_t);	// size in bytes of
		
		// Read one sample from input
		int got1=read(f1,f1_samples,cbBuffer);
		if(got1<0){
			fprintf(stderr, "%s : Read from %s failed, error=%s.", argv[0], argv[1], strerror(errno));
			exit(1);
		}else if(got1==0){
			break;	 // end of file
		}else if(got1<cbBuffer){
			break;
		}
		
        
		int got2=read(f2,f2_samples, cbBuffer);
        if(got2<0){
            fprintf(stderr, "%s : Read from %s failed, error=%s.", argv[0], argv[1], strerror(errno));
            exit(1);
        }else if(got2==0){
            break;   // end of file
        }else if(got2<cbBuffer){
			break;
		}
        
		for(int i=0;i<window_size;i++) //convert to mono
		{
			f1_mono_buffer[i] = ((double)f1_samples[2*i] + (double)f1_samples[2*i+1])/2;
			f2_mono_buffer[i] = ((double)f2_samples[2*i] + (double)f2_samples[2*i+1])/2;
		}
		
		for(int i=0;i<window_size;i++)
		{
			f1_RMS = f1_RMS + f1_mono_buffer[i]*f1_mono_buffer[i];
			f2_RMS = f2_RMS + f2_mono_buffer[i]*f2_mono_buffer[i];
		}
        f1_RMS = sqrt(f1_RMS/window_size);
        f2_RMS = sqrt(f2_RMS/window_size);
        rnum = rnum + f1_RMS*f2_RMS;
        f1_sq_sum = f1_sq_sum + f1_RMS*f1_RMS;
		f2_sq_sum = f2_sq_sum + f2_RMS*f2_RMS;
		
        
	}
	
	rdenom = sqrt(f1_sq_sum*f2_sq_sum);
	r = rnum/rdenom;
	printf("%f\n", r);
	
	close(f1);
	close(f2);
	
	return 0;
}