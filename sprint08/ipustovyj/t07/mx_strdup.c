#include "create_new_agents.h"

char *mx_strdup(const char *str) {
    int lenght = mx_strlen(str);
    char *cpy = mx_strnew(lenght);
    return mx_strcpy(cpy, str);
}
