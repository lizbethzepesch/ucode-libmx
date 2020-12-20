#include "libmx.h"

static int file_len(const char *file) {
    short f = open(file, O_RDONLY);
    short size = 0;
    int len = 0;
    char c;
    size = read(f, &c, 1);
    for (;size > 0; len++) 
        size = read(f, &c, 1);
    
    close(f);
    return len;
}

char *mx_file_to_str(const char *file){
    if(!file)
        return NULL;
    int f = open(file, O_RDONLY);

    if (f == -1) {
        close(f);
        return NULL;
    }

    if (!file_len(file)) {
        return NULL;
    }

}



char *mx_file_to_str(const char *file) {
    int f = open(file, O_RDONLY);
    int sz = 0;
    int size = 0;

    
    char *newstr = mx_strnew(size);
    sz = read(f, newstr, size);
    close(f);
    return newstr;
}
