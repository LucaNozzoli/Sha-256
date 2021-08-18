#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "sha_func.h"

long long int sigma1(long long int val){

    return ( rot_r(17,val) ^ rot_r(19, val) ^ shift_r(10, val) );

}
