#include "libmx.h"

char *mx_nbr_to_hex(unsigned long nbr) {
    char *result = NULL;
    unsigned long num = nbr;
    int temp;

    int n = nbr;
    int length = 0;
    for (;n; length++) 
        n /= 16;
       

    result = malloc(length);
    if (nbr == 0)
        return mx_strcpy(result, "0");
    while (num) {
        temp = num % 16;
        if (temp < 10)
            result[--length] = 48 + temp;
        if (temp >= 10)
            result[--length] = 87 + temp;
        num /= 16;
    }
    return result;
}
