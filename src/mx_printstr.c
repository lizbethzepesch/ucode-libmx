#include "libmx.h"

void mx_printstr(const char *s){
    int strlen = 0;

    while (s[strlen] != '\0')
        strlen++;

    write(1, s, strlen);
}
