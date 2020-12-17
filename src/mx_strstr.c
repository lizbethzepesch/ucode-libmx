#include "libmx.h"

char *mx_strstr(const char *haystack, const char *needle){

    if ((!haystack) || (!needle))
        return NULL;

    if (!mx_strlen(needle))
        return haystack; 

    char *hay = (char *)haystack;
    char *need = (char *)needle;
    

    for (; *hay; hay++) 
        if (!mx_strncmp(hay, need, mx_strlen(need)))
            return hay;    
    
    return NULL;
}
