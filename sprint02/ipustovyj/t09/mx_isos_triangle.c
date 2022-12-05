#include <unistd.h>

void mx_printchar(char c);

void mx_isos_triangle(unsigned int length, char c) {
	for (unsigned int x = 0; x < length; x++) {
		for (unsigned int y = 0; y <= x; y++) {
			mx_printchar(c);
		}
	}
	mx_printchar(10);
}

