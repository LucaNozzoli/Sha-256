#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "bin.h"

unsigned char* mensagem(unsigned char* s){

    int mensagem;
    unsigned char *binary = char_to_binary(s);

    //mensagem = atoi(binary);
    //mensagem = (int)strtol(s, NULL, 2);
    printf("-------\nEntrada : %s\n-------\n\n", s);
    printf("-------\nMensagem : %s\n-------\n\n", binary);

    //return mensagem;
    return binary;
}
