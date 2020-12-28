#include "libmx.h"

void *mx_memmem(const void *big, size_t big_len, const void *little, size_t little_len){
    
	unsigned char *position = NULL;
	unsigned char *arr = NULL;

	if (big_len >= little_len && big_len > 0 && little_len > 0) {
		position = (unsigned char *)big;
		arr = (unsigned char *)little;
		for (; *position; position++) 
			if (!mx_memcmp(position, arr, little_len - 1))
				return position;
	}
	return NULL;
}
