#include "libmx.h"
int mx_factorial_iter(int n){
    unsigned long int res = 1;
    if (n < 0) return 0;
    if (!n || n == 1) return 1;
    for (int i = 1; i <= n; i++) {
        res *= i;
        if(res > 2147483647)
            return 0;
    }
    return res;
}
