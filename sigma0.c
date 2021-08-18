#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "sha_func.h"

long long int sigma0(long long int val){

    return ( rot_r(7, val) ^ rot_r(18, val) ^ shift_r(3, val) );

}
