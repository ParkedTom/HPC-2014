#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>
#include <stdint.h>

#include <unistd.h>
#define SAMPLE_FREQ 44100
#define NO_SAMPLES 512
#define PI 3.1415927

int main(int argc, char *argv[])
{
    
    double freq;
    int t = 0;
    if(argc>1) // if an input argument is given
    {
        freq = atof(argv[1]); //assign to frequency
        if(freq > (SAMPLE_FREQ/2)) // check if frequency is above nyquist frequency
        {
            freq = SAMPLE_FREQ/2; // set to nyquist
        }
    }
    else
    {
        freq = 50; // if no inputs set to 50Hz
    }
    
    while(1){
        // Buffer containing one sample (left and right, both 16 bit).
        int16_t samples[2*NO_SAMPLES];
        unsigned cbBuffer=sizeof(samples);      // size in bytes of
        
        // Generate sine samples
	for(int i=0; i<NO_SAMPLES; i++)
	{
        	samples[2*i] = (int16_t)30000*sin((2 * PI * freq * t)/SAMPLE_FREQ);
        	samples[(2*i)+1] = samples[2*i];
        	t++;
        }
        // Copy one sample to output
        int done=write(STDOUT_FILENO, samples, cbBuffer);
        if(done<0){
            fprintf(stderr, "%s : Write to stdout failed, error=%s.", argv[0], strerror(errno));
            exit(1);
        }else if(done!=cbBuffer){
            fprintf(stderr, "%s : Could not read requested number of bytes from stream.\n", argv[0]);
        }
    }
    
    return 0;
}

