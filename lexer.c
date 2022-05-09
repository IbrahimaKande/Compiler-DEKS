#include "buffer.c"
#include "buffer.h"
#include "utils.c"
#include "utils.h"
#include <stdio.h>
#include <ctype.h>

void variable (buffer_t *buffer){
    int i;
    char c;
    for(i = 0; i < sizeof(buffer); i++){
        if(buf_getchar(buffer) != ' '){
            c = c + buf_getchar(buffer);
            buf_forward(buffer, 1);
        }
        else {
            printf(c);
        }
    }
}

int main(){
    printf("OKAAAY LET'S GOOOOw");
    buffer_t t;
    FILE *f = fopen("input.txt", "r");

    variable(&t);

    return 0;
}