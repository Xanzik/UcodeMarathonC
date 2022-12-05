#include <stdbool.h>

bool mx_isspace(int c) {
    if ((c == 32) || (c == '\0')) {
        return true;
    }
    return false;
}

