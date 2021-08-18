#include "sha_func.h"
#include "bin.h"



void main(){

    char *x = "abc";
    int n = 32;
    
    //printf("mensagem int : %s\n", mensagem(x));
    
    long long int* final =  schedule( padding( mensagem(x)));

}
