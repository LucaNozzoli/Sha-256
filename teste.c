#include "sha_func.h"
#include "bin.h"



void main(){

    char *x = "abc";
    int n = 32;
    
    //printf("mensagem int : %s\n", mensagem(x));
    
    printf("Aqui:%s\n", padding(mensagem(x)));

}
