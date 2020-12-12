#include "libmx.h"

int mx_atoi(const char *str){
    if(!str) return 0;
    
    int is_minus = 0;
    int res = 0;
    int num = 1;

    if (str[0] == '-')
        is_minus = 1;
        
    for (int i = 0; str[i] != '\0'; i++){
        if (str[i] > 47 && str[i] < 58)
            num *= 10;
    }

    num /= 10;
    for (int i = (is_minus) ? 1 : 0; str[i] != '\0'; i++, num /= 10){
        if ((!(str[i] > 47 && str[i] < 58) && i != 0))
            return 0;
        if ((((str[i]) == 32) || ((str[i]) >= 9 && (str[i]) <= 13)))
            continue;
        res += ((str[i] - 48) * num);
    }

    return is_minus == 0 ? res : res * -1;
}
