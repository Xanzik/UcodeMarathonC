#include "../inc/minilibmx.h"

bool isdigit(int c) {
    if (c >= 48
        && c <= 57) {
        return true;
    }
    return false;
}
