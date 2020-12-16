#include "libmx.h"

char *mx_strcat(char *restrict s1, const char *restrict s2) {
    int i = mx_strlen(s1);
    for (int j = 0; i < mx_strlen(s1) + mx_strlen(s2); i++, j++) {
        s1[i] = s2[j];
    }
    s1[i + 1] = '\0';
    return s1;
}


    
