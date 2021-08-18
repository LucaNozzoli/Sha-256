#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdint.h>



char* mensagem(char* s);

char* padding(char* s);

long long int* schedule(unsigned char* bloco);

long long int rot_r(int n,long long int val);
long long int shift_r(int n, long long int val);
long long int sigma0(long long int val);
long long int sigma1(long long int val);
