#include "libmx.h"

char *mx_nbr_to_hex(unsigned long nbr){
    
    char *res = NULL;
    char arr[55];
    int i = 0;
    res = malloc(55);

    if(!nbr) return mx_strcpy(res, "0");

    for (int temp = 0; nbr; i++) {    
        temp = nbr % 16; 
        if (10 > temp) arr[i] = temp + 48;
        else arr[i] = temp + 55; 
        nbr /= 16; 

    } 

    for(int j = i - 1, c = 0; j >= 0; j--, c++) 
        res[c] = arr[j]; 

    return res;
}
