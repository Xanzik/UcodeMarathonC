#include "parse_agents.h"

char *mx_strchr(const char *s, int c) {
	int x = 0;
	char *b = (char*)s;
	char *y;
	while (*b != '\0') {
		if (b[x] == c)
			return y = &b[x];
		x++;
	}
	return NULL;
}

