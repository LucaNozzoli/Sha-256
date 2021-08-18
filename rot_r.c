#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>


long long int rot_r(int n,long long int val){

    return ( (n >> val)|(n << (32-val) ) );

}
