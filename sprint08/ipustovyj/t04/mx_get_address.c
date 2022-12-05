#include "get_address.h"

char *mx_get_address(void *p) {
    int i = 2;
    int j = 0;
    unsigned long p2 = (unsigned long)p;
    char *str = mx_nbr_to_hex(p2);
    int size = mx_strlen(str);
    char *res = mx_strnew(size + 2);
    res[0] = '0';
    res[1] = 'x';
    while (j < size) {
        res[i] = str[j];
        i++;
        j++;
    }
    return res;
}
