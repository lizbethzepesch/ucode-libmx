#include "libmx.h"

int mx_sqrt(int x){
    for(int i = 2; i < x/(i - 1); i++)
        if(i * i == x)
            return i;
    
    return 0;
}
