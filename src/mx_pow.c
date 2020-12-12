#include "libmx.h"
double mx_pow(double n, unsigned int pow){
    if(pow == 0)
        return 1;
    return pow == 1 ? n : n * mx_pow(n, pow - 1);
}
