#include <unistd.h>

void mx_only_printable(void) {
	for (int x = 126; x >= 32; x--) {
			write(1, &x, 1);
	}
	write(1, "\n", 1);
}

