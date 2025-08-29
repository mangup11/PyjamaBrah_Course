// Generate a sine wave with sampling freq of 44100 samples/sec
// Need to create sine wave of 2sec so total samples = 44100*2
// Each sample is going to be of 2byte so total memory needed is 44100*2*2 bytes

#include <stdio.h>
#include <math.h>


int main(){
    float samples_per_sec = 44100;
    int tone_freq = 440;
    int duration = 2;
    int max_encoding = 32767;
    int total_samples = samples_per_sec*duration;

    float time =0;
    int angle;
    int i=0;
    short int samples;

    FILE *f; 
    f = fopen("sine.raw", "wb");
    if (f == NULL){
        printf("Could not open the file");
        return -1;
    }

    while(i<total_samples){
        time = i* 1/(samples_per_sec);
        angle = 2*3.14*tone_freq*time;
        samples = max_encoding*sin(angle);
        fwrite(&samples, 2, 1, f);
        i++;
    }


}
