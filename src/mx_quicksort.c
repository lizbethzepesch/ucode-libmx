#include "libmx.h"

int mx_quicksort(char**arr, int left, int right){
    if (!arr)
        return -1;

    int count = 0;
    int l = left;
    int r = right;
    int pivot = mx_strlen(arr[(l + r) >> 1]);
    char *swap;

    while (l <= r) {
        while (mx_strlen(arr[l]) < pivot)
            l++;
        while (mx_strlen(arr[r]) > pivot)
            r--;
            
        if (l <= r) {
            if(mx_strlen(arr[r]) != mx_strlen(arr[l])) {
                swap = arr[l];
                arr[l] = arr[r];
                arr[r] = swap;
                count++;
            }
            l++;
            r--;
        }
    }

    if (r > left)
        count += mx_quicksort(arr, left, r); 
    if (l < right)
        count += mx_quicksort(arr, l, right);

    return count;
}
