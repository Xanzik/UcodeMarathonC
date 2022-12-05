#include "../inc/mx_wc.h"

bool mx_isspace(char c) {
    if (c == ' ' || c == '\n' || c == '\t' || c == '\f' || c == '\v' || c == '\r') {
        return true;
    }
    return false;
}
