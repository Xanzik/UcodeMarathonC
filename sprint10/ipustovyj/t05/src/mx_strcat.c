#include "parse_agents.h"

char *mx_strcat(char *s1, const char *s2) {
    char *temp = s1 + mx_strlen(s1);
    while (*s2 != '\0') {
        *temp++ = *s2++;
    }
    *temp = '\0';
    return temp;
}

