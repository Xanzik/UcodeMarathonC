#include "only_smiths.h"

char *mx_strdup(const char *str) {
    int lenght = mx_strlen(str);
    char *cpy = mx_strnew(lenght);
    return mx_strcpy(cpy, str);
}
