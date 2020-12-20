#include "libmx.h"

void *mx_memset(void *b, int c, size_t len){
    unsigned char *res = (unsigned char *)b;
    for (int i = 0; i < len; i++)
        res[i] = (unsigned char *)c;
    
    return b;
}