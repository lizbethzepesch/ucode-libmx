#include "libmx.h"

void mx_print_strarr(char**arr, const char*delim){
    if(!arr || !delim)
        return;
    for (int i = 0; arr[i]; i++) {
        mx_printstr(*arr);
        mx_printchar((char)delim);
    }

    mx_printchar('\n');
}
