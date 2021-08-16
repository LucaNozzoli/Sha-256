#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>


char* char_to_binary(char* s){

    size_t len = strlen(s);
    char *binary = (char *)malloc(sizeof(len*8+1) );
    binary[0] = '\0';
    for(size_t i=0; i < len; i++){
    	char ch = s[i];
	for(int j = 7; j >= 0; j--){
		if(ch & (1 << j) )
			strcat(binary, "1");
		else
			strcat(binary, "0");
	
	} 
    
    
    }

    return binary;

}
