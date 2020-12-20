#include "libmx.h"

void *mx_memrchr(const void *s, int c, size_t n){
    
    unsigned char *arr = (unsigned char *)s + mx_strlen(s);

    for (int i = n - 1; i >= 0; i--, arr--){
        if(*arr == (unsigned char) c)
            return arr;
    }

    return NULL;
}
