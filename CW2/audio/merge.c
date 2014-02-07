#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>
#include <stdint.h>

#include <unistd.h>
#define BUFFER_SIZE 512

int main(int argc, char *argv[])
{	
	
	if(argc<3)
	{
		fprintf(stderr, "%s : Not enough input arguments.\n", argv[0]);
		exit(1);
	}
	
	FILE * f1;
	FILE * f2;
	
	f1 = fopen(argv[1], 'r');
	f2 = fopen(argv[2], 'r');

	while(1){
		// Buffer containing one sample (left and right, both 16 bit).
		int16_t f1_samples[2*BUFFER_SIZE];
		int16_t f2_samples[2*BUFFER_SIZE];
		int16_t out_buffer[2*BUFFER_SIZE];
		unsigned cbBuffer=sizeof(f1_samples);	// size in bytes of 
		
		// Read one sample from input
		int got1=fread(f1_samples, sizeof(int16_t), 2*BUFFER_SIZE, f1);
		if(got1<0){
			fprintf(stderr, "%s : Read from %s failed, error=%s.", argv[0], argv[1], strerror(errno));
			exit(1);
		}else if(got1==0){
			break;	 // end of file
		}else if(got1!=cbBuffer){
			fprintf(stderr, "%s : Did not receive expected number of bytes from %s.\n", argv[0], argv[1]);
			exit(1);
		}
		

		int got2;//=read(f2_samples, cbBuffer);
                if(got2<0){
                        fprintf(stderr, "%s : Read from %s failed, error=%s.", argv[0], argv[1], strerror(errno));
                        exit(1);
                }else if(got2==0){
                        break;   // end of file
                }else if(got2!=cbBuffer){
                        fprintf(stderr, "%s : Did not receive expected number of bytes from %s.\n", argv[0], argv[1]);
                        exit(1);
                }

		// Copy one sample to output
		int done=write(STDOUT_FILENO, f1_samples, cbBuffer);
		if(done<0){
			fprintf(stderr, "%s : Write to stdout failed, error=%s.", argv[0], strerror(errno));
			exit(1);
		}else if(done!=cbBuffer){
			fprintf(stderr, "%s : Could not read requested number of bytes from stream.\n", argv[0]);
		}
	}
	fclose(f1);
	fclose(f2);

	return 0;
}
