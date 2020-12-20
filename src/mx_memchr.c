#include "libmx.h"

void *mx_memchr(const void *s, int c, size_t n){

    unsigned char *arr = (unsigned char *)s;

    for (int i = 0; i < n; i++, arr++){
        if(*arr == (unsigned char) c)
            return arr;
    }

    return NULL;
}
