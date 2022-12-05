#include <stdbool.h>

bool mx_isdigit(int c);
bool mx_isspace(int c);

int mx_atoi(const char *str) {
    int sum = 0;
    int off = 0;

    for ( ; mx_isspace(*str); ) {
        str++;
    }

    if (*str == '-') {
    off = 1;
    str++;
    }

    for ( ; mx_isdigit(*str); str++) {
        sum = (sum * 10) + (*str - '0');
    }

    if (off == 1)
        return sum = -sum;
    return sum;
}

