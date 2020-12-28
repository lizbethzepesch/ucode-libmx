#include "libmx.h"

char *mx_del_extra_spaces(const char *str){
    if (!str)
        return NULL;
        
    char *arr = NULL;
    char *res = NULL;
 
    arr = mx_strnew(mx_strlen(str));
    for (int i = 0, j = 0;str[i]; i++) {
        if (!(mx_is_space(str[i]))) {
            arr[j] = str[i];
            j++;
        }
        if (!(mx_is_space(str[i])) && mx_is_space(str[i + 1])) {
            arr[j] = ' ';
            j++;
        }
        
    }
    res = mx_strtrim(arr);
    mx_strdel(&arr);
    
    return res;    
}
