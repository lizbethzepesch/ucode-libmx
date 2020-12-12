#include "libmx.h"

void mx_printint(int n){
    char arr[40];
    long res = n;
    int i = 0;

    if (!res)
        mx_printchar(n + '0');

    if (res < 0){
        res *= -1;
        mx_printchar('-');
    }

    for (;res; i++){
        arr[i] = (res % 10) + '0';
        res /= 10;
    }

    for (int j = i - 1; j >= 0; j--)
        mx_printchar(arr[j]); 
}
