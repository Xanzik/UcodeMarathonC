#include <stdbool.h>

bool isspace(int c) {
    if (c >= 32) {
        return true;
    }
    return false;
}

