#include "libmx.h"

int mx_count_words(const char *str, char c){
    if (!str)
        return -1;
        
    int word = 1;
    unsigned count = 0; 
    
    for (int i = 0;str[i]; i++) {
        if (str[i] == c)
            word = 1;
        else if (word) {
            word = 0;
            ++count;
        }
    }
    return count;
}
