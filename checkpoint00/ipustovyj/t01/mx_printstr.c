#include <unistd.h>

void mx_printstr(const char *s) {
	int x = 0;
	while (s[x++]);
	x -= 1;
	write(1, s, x);
	write(1, "\n", 1);
}

