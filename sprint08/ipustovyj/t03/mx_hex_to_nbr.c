#include "hex_to_nbr.h"

unsigned long mx_hex_to_nbr(const char *hex) {
    int len = 0;
    unsigned long num = 0;
    unsigned long base = 1;

    if (hex == NULL)
        return 0;

    if (hex != NULL) {
        while (hex[len])
            len++;
    }

    for (int i = 0; i <= len; i++) {
        if (mx_isdigit(hex[len - i])) {
            num += (hex[len - i] - 48) * base;
            base *= 16;
        }
        if (mx_isalpha(hex[len - i]) && mx_isupper(hex[len - i])) {
            num += (hex[len - i] - 55) * base;
            base *= 16;
        }
        if (mx_isalpha(hex[len - i]) && mx_islower(hex[len - i])) {
            num += (hex[len - i] - 87) * base;
            base *= 16;
        }
    }

    return num;
}
