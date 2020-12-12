#include "libmx.h"
int mx_sqrt(int x){
    if (x == 1) return 1;

    for (int i = 2; i < x/(i - 1); i++)
        if (i * i == x)
            return i;

    return 0;
}
