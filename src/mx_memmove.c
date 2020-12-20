#include "libmx.h"

void *mx_memmove(void *dst, const void *src, size_t len){
    unsigned char *arr = malloc(len);

	arr = mx_memcpy(arr, src, len);
	dst = mx_memcpy(dst, arr, len);
	free(arr);
	return dst;
}
