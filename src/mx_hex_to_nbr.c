#include "libmx.h"
unsigned long mx_hex_to_nbr(const char *hex) {
    int len = 0;
	unsigned long res = 0;
	unsigned long base = 1;

	if (hex)
		while (hex[len])
			len++;
	else
		return 0;

	for (int i = 0; i <= len; i++) {

		int num = hex[len - i];
		
		if (num >= '0' && num <= '9') {
			res = res + (num - 48) * base;
			base *= 16;
		}
		if (num >= 'A' && num <= 'F') {
			res = res + (num - 55) * base;
			base *= 16;
		}
		if (num >= 'a' && num <= 'f') {
			res = res + (num - 87) * base;
			base *= 16;
		}
	}
	return res;
}
