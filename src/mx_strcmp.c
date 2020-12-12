#include "libmx.h"
int mx_strcmp(const char*s1, const char*s2){
    for(; *s1 && (*s1 == *s2); s1++, s2++);
    return *(unsigned const char *)s1 - *(unsigned const char *)s2;
}
//alias c="clang -std=c11 -Wall -Wextra -Werror -Wpedantic *.c"
