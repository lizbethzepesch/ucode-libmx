#include "libmx.h"

int mx_memcmp(const void *s1, const void *s2, size_t n){
    const unsigned char *res1 = s1;
    const unsigned char *res2 = s2;
    
    size_t i = 0;
    if (!n)
        return 0;
    else 
        for (;res1[i] == res2[i] && i != n; i++) 
            if (res1[i] == '\0' && res2[i] == '\0')
                return 0;
            
        
    return res1[i] - res2[i];
}


    
    
