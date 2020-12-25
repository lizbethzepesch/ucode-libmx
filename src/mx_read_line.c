#include "libmx.h"

int mx_read_line(char **lineptr, size_t c_size, char delim, const int fd) {
    if (c_size < 0 || fd < 0)
        return -2;

    (*lineptr) = (char *) mx_realloc(*lineptr, c_size);
    mx_memset((*lineptr), '\0', malloc_size((*lineptr))); 
    size_t bytes = 0;
    char c;

    if (read(fd, &c, 1)) {
        if (c == delim)
            return 0;

        (*lineptr) = (char *) mx_realloc(*lineptr, bytes + 1);
        (*lineptr)[bytes] = c;
        bytes++;
    }
    else
        return -1;

    for (; read(fd, &c, 1); bytes++) {
        if (c == delim)
            break;
        
        if (bytes >= c_size)
            (*lineptr) = (char *) mx_realloc(*lineptr, bytes + 1);

        (*lineptr)[bytes] = c;

        
    }

    (*lineptr) = (char *) mx_realloc(*lineptr, bytes + 1);

    size_t free_bytes = malloc_size((*lineptr)) - bytes; 
    mx_memset(&(*lineptr)[bytes], '\0', free_bytes);

    return bytes + 1;
}
