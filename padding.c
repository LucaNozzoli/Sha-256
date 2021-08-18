#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "bin.h"

unsigned char* padding(unsigned char* s){

    int l = strlen(s);
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
    

    return final;
}
