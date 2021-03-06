#include "libmx.h"

char *mx_strtrim(const char *str) {
    if (!str)
        return NULL;

    for (;mx_is_space(*str); str++);

    int len = mx_strlen(str);

    for (;mx_is_space(str[len - 1]); len--);

    return mx_strndup(str, len);
}
