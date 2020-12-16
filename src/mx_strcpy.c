#include "libmx.h"
char* mx_strcpy(char *dst, const char *src) {
    char *result = dst;
    
    for (; *src != '\0'; dst++, src++)
        *dst = *src;

    *dst = '\0';
    return result;
}
