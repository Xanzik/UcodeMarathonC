#include "file_to_str.h"

char *mx_strcpy(char *dst, const char *src) {
	char *temp = dst;
	while ((*dst++ = *src++) != '\0');
	return temp;
}
