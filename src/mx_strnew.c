#include "libmx.h"
char *mx_strnew(const int size){
    if(size < 0)
        return NULL;
    char *array = (char*) malloc(size + 1);

    for (int i = 0; i <= size; i++)
        array[i] = '\0';
    return array;
}
