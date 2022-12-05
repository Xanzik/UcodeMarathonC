#include "../inc/minilibmx.h"

char *mx_strtrim(const char *str) {
    if (str == NULL) {
        return NULL;
    }

    int size = 0;
    int space_left = 0;
    int space_right = 0;

    while(*str) {
        size++;
        str++;
    }
    str -= size;

    while(*str && mx_isspace(*str)) {
        str++;
        space_left++;
    }
    str -= space_left;
    
    for (int i = size - 1; i >= space_right; i--) {
        if (!mx_isspace(str[i])) {
            break;
        }
        space_right++;
    }
    char *array = mx_strnew(size - space_left - space_right);
    
    for (int i = space_left, j = 0; i <= size - 1 - space_right; i++, j++) {
        array[j] = str[i];
    }
    return array;
}

