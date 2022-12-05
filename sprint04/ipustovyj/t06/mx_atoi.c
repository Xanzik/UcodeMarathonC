#include <stdbool.h>
#include <stdio.h>
bool mx_isdigit(int c);
bool mx_isspace(int c);

int mx_atoi(const char *str) {
	int result;
	int off = 0;
	int x = 0;
	if(*str == '-') {
		off = 1;
		x++;
		}
	for ( ; mx_isspace(str[x]) != 1; x++) {
		if (mx_isdigit(str[x]))
			result = result * 10 + str[x] - '0';
	}
	if (off == 1) {
		result = -result;
	}
	return result;
}

int main(void) {
	char *str = "-123";
	printf("%d", mx_atoi(str));
	return 0;
}

