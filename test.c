#include "buffer.c"
#include "buffer.h"
#include "utils.c"
#include "utils.h"
#include <stdio.h>
#include <ctype.h>

int main() {   
    printf("OKAAAY LET'S GOOOOw");
    buffer_t t;
    FILE *f = fopen("input.txt", "r");

    /*buf_init(&t, f);
    buf_getchar(&t);
    buf_print(&t);*/

    int i;
    for(i = 0; i < sizeof(&t); i++){
        if(isalpha(buf_getchar(&t))){
            buf_forward(&t, 1);
        }
        else {
            buf_lock(&t);
            buf_getchar(&t);
        }
    }
    
    return 0;
}

