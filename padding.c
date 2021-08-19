#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "bin.h"

unsigned char* padding(char* s){

    long int l = strlen(s);
    printf("aqui!");
    printf("len s: %ld", l);
    int k = (448 - l - 1) % 512 ;
 
    unsigned char *temp = (char*)malloc(sizeof(char)*448);
    unsigned char *final = (char*)malloc(sizeof(char)*512); 
    strcat(temp, "1");
    for(int i = 0; i < k; i++){	   
	    strcat(temp,"0");
    }
    strcat(final, s);
    strcat(final, temp);
    strcat(final, bin_64bits(l-2) ); 
    //for(int i =0; i<512; i++){
	//	    printf("indice %d : %c\n", i, final[i]);
	  //  }
    //printf("%ld", strlen(final));
    return final;

}
