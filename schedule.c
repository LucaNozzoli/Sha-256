#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "sha_func.h"

long long int* schedule(unsigned char* bloco){

    int i = 0;
    int j = 0;
    int k = 0;
    long long int final[64];
    char temp[16];  
    while(j < 16){
    	temp[k] = bloco[i];
    	k++;

	if( (i % 32) == 0 && k == 32){
		final[j] = atoll(temp);
		j++; 
		k = 0;
	}
	i++;
    
    }
    for(int c=0; c<16; c++){
    
	    printf("%lld\n", final[c]);
    
    }
    printf("acabei!\n");
    //Primeiros 16 elementos
    
    //i = 0;
    //for(i = 16; i < 64; i++){
	 
        //final[i] = ( sigma1(final[i-2]) + final[i-7] + sigma0(final[i-15]) + final[i-16] );
    
    //} 
    
    return final;

}
