#include "only_smiths.h"

char *mx_strcpy(char *dst, const char *src) {
	char *temp = dst;
	while ((*dst++ = *src++) != '\0');
	return temp;
}

