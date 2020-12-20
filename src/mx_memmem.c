#include "libmx.h"

void *mx_memmem(const void *big, size_t big_len, const void *little, size_t little_len){
    char *cur, *last;
	const char *copy_big = (const char *)big;
	const char *copy_little = (const char *)little;

	if (!big_len || !little_len || (big_len < little_len))
		return NULL;

	if (little_len == 1)
		return mx_memchr(big, (int)*copy_little, big_len);

	last = (char *)copy_big + big_len - little_len;

	for (cur = (char *)copy_big; cur <= last; cur++)
		if (cur[0] == copy_little[0] && !mx_memcmp(cur, copy_little, little_len))
			return cur;

	return NULL;
}
