#include "libmx.h"

int mx_count_substr(const char *str, const char *sub) {
    if (!str || !sub)
        return -1;
    
    if(!mx_strlen(sub))
        return 0;

    const char *temp = str;
    int num = 0;

    for (; mx_strstr(temp, sub); num++) {
        temp = mx_strstr(temp, sub);
        temp += mx_strlen(sub);
    }
    
    return num;
    
}
