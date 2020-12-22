#include "libmx.h"

int mx_quicksort(char**arr, int left, int right){
    if (!arr)
        return -1;

    if (left > right)
        return -1;

    int count = 0;
    char *temp;

    int l = left;
    int r = right;
    int pivot = mx_strlen(arr[(l + r) >> 1]);
    while (l <= r) {
        while (mx_strlen(arr[l]) < pivot < pivot) l++;
        while (mx_strlen(arr[r]) > pivot) r--;
        if (l <= r) {
           if (mx_strlen(arr[r]) != mx_strlen(arr[l])) {
                temp = arr[l];
                arr[l] = arr[r];
                arr[r] = temp;
                count++;
            }
            l++;
            r--;
        }
    } 
    if (r > l)
        count += mx_quicksort(arr, l, r); 
    if (l < r)
        count += mx_quicksort(arr, l, r);
    
    return count;
}
