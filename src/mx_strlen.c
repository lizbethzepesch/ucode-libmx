#include "libmx.h"
int mx_strlen(const char *s){
    int c = 0;
    while (*s){
        s++;
        c++;
    }
    return c; 
}
