#include "mx_printchar.c"

void mx_only_printable(void) {
	for (int x = 126; x >= 32; x--) {
		mx_printchar(x);
	}
	mx_printchar(10);
}
