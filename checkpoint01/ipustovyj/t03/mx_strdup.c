#include <stdlib.h>

int mx_strlen(const char *s) {
    char c = s[0];
    int sum = 0;
    int i = 0;

    while(c != '\0') {
        sum++;
        c = s[++i];
    }
    return sum;
}

char *mx_strnew(const int size) {
    char *str = (char *) malloc(size + 1);

    if (str == NULL)
        return NULL;

    for (int i = 0; i < size + 1; i++)
        str[i] = '\0';

    return str;
}

char *mx_strcpy(char *dst, const char *src) {
    int i = 0;
    while(src[i] != '\0') {
        dst[i] = src[i];
        i++;
    }
    return dst;
}

char *mx_strdup(const char *str) {
    int len = mx_strlen(str);
    char *dup = mx_strnew(len);
    return mx_strcpy(dup, str);
}
