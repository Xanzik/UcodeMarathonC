#include "mx_printchar.c"

void mx_hexademic(void) {
	for (int i = 48; i < 58; i++) {
        mx_printchar(i);
    }

    for (int i = 65; i < 71; i++) {
        mx_printchar(i);
    }
    mx_printchar(10);
}
