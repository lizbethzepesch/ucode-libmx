#include "libmx.h"

int mx_count_words(const char *str, char c){
    if(!str || !c)
        return -1;

    int counter = 0;
    int is = 0;
    int i = 0;
    for (i = 0; str[i] == c; i++);
    
    for (i++; str[i]; i++){

        if(str[i] == c && !is) {
            counter++; 
            is = 1;
        } else  
            is = 0;

    }
    if(str[mx_strlen(str) - 1] == c)
        counter--;
    return counter;
}
