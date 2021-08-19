#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "sha_func.h"

long long int* schedule(unsigned char* bloco){

    //printf("bloco (%ld bits): %s",strlen(bloco), bloco);
    int i = 0;
    int j = 0;
    int k = 0;
    long long int final[64] ;
    char temp[16];  
    while(i <= 512){
	temp[k]=bloco[i];
	//printf("temp[%d]: %c = bloco[%d] : %c\n", k, temp[k], i, bloco[i]);
	k++;
        if( (i % 32 == 0) && (i != 0) ){
		final[j] = strtol(temp);
		//printf("linha %d : %d\n",j,temp);	
		j++;
		k = 0;
	}
	i++;
    }
    //printf("acabei!\n");
    
    return final;

}
