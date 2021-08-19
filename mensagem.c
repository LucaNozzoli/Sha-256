#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "bin.h"

char* mensagem(char* s){

    //char *binary = char_to_binary(s);
    
    char *binary = (unsigned char*)malloc(sizeof(char)*strlen(s)*8);
    printf("len binary pre change:%s\n", binary);
    binary = char_to_binary(s);

    printf("-------\nEntrada : %s\n-------\n\n", s);
    printf("-------\nMensagem : %s\n-------\n\n", binary);
  
    printf("len mensagem: %ld\n", strlen(binary));
    for(int i =0; i<strlen(binary); i++)
	    printf("%d\n",binary[i]);
    return binary;
}
