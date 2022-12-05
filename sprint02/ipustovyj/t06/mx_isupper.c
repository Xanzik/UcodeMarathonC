#include <stdbool.h>

bool isupper(int c) {
    if (c >= 65 
        && c <= 90) {
        return true;
    }
    return false;
}

