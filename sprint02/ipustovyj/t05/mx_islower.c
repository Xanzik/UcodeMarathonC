#include <stdbool.h>

bool islower(int c) {
    if (c >= 97 
        && c <= 122) {
        return true;
    }
    return false;
}

