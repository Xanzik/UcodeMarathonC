#include <stdbool.h>

bool mx_isspace(char c) {
    if (c == 32
        || c == '\0'
        || c == '\n'
        || c == '\t'
        || c == '\v'
        || c == '\f'
        || c == '\r') {
        return true;
    }
    return false;
}

