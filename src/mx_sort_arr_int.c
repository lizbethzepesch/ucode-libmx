#include "libmx.h"
void mx_sort_arr_int(int* arr, int size) {  
    for (int i = 0; i < size - 1; i++) {   
        if (arr[i] > arr[i + 1]) {    
            int b = arr[i];    
            arr[i] = arr[i + 1];    
            arr[i + 1] = b;   
        }  
    }  
    for (int i = 0; i < size - 1; i++) {  
        if (arr[i] > arr[i + 1])    
            mx_sort_arr_int(arr, size);   
        else 
            continue;  
    } 
}
