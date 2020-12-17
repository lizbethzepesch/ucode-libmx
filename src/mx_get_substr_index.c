#include "libmx.h"

int mx_get_substr_index(const char *str, const char *sub){
    if(!str || !sub) return -2;
    char * temp = mx_strnew(mx_strlen(sub));
    
    for (int i = 0; str[i];  i++) 
        if (str[i] == sub[0]){
            temp = mx_strncpy(temp, &str[i], mx_strlen(sub));
            if(!mx_strcmp(temp, sub))
                return i;
        }
    return -1;
    
}
