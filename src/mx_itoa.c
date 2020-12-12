#include "libmx.h"


char* mx_itoa(int number){
    int length = 0;
    int num = number;
    int minus = number < 0;

	for (;num; length++) 
		num /= 10;

    if(minus) {
        length++;
	    number *= -1;
    }
    char *arr = mx_strnew(length);

    for (int i = length - 1; number; number /= 10, i--, length--){
        arr[i] = (number % 10) + 48;
    }    
    if(minus)
        arr[0] = '-';
    return arr;
}
