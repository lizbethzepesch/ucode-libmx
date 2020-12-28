#include "libmx.h"

static int letter_count(const char *s, char c) {
	int i = 0;

	while (s[i] != c && s[i])
		i++;
	return i;
}
char **mx_strsplit(const char *s, char c) {
    int len = 0;
    char **res = NULL;
	int i = 0;
	
    if (!s)
        return NULL;
    res = (char **)malloc((mx_count_words(s, c) + 1) * sizeof(char *));
    for (;(*s) && (*s != '\0'); s++) {
        if (*s != c) {
            len = letter_count(s, c);
            res[i] = mx_strndup(s, len);
            s += len;
            i++;
            continue;
		}
    }
    res[i] = NULL;
    return res;

}
