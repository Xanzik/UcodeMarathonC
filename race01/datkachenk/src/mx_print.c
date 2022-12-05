#include "../inc/minilibmx.h"

void mx_print(long long x, char *op, long long y, long long z) {
    if (*op == '+') {
        if (x + y == z) {
            mx_printint(x);
            mx_printstr(" + ");
            mx_printint(y);
            mx_printstr(" = ");
            mx_printint(z);
            mx_printchar('\n');
        }
    }
    else if (*op == '-') {
        if (x - y == z) {
            mx_printint(x);
            mx_printstr(" - ");
            mx_printint(y);
            mx_printstr(" = ");
            mx_printint(z);
            mx_printchar('\n');
        }
    }
    else if (*op == '*') {
        if (x * y == z) {
            mx_printint(x);
            mx_printstr(" * ");
            mx_printint(y);
            mx_printstr(" = ");
            mx_printint(z);
            mx_printchar('\n');
        }
    }
    else if (*op == '/') {
        if (y != 0 && x / y == z) {
            mx_printint(x);
            mx_printstr(" / ");
            mx_printint(y);
            mx_printstr(" = ");
            mx_printint(z);
            mx_printchar('\n');
        }
    }
}

