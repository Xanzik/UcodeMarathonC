#include "nbr_to_hex.h"

char *mx_nbr_to_hex(unsigned long nbr) {
    char *hex = mx_strnew(30);
    char *reverse = mx_strnew(30);
    int i = 0;
    int k = 0;
    while (nbr != 0) {
        int temp = 0;
 
        temp = nbr % 16;
 
        if (temp < 10) {
            hex[i] = temp + 48;
            i++;
        }
        else {
            hex[i] = temp + 55;
            i++;
        }
        nbr = nbr / 16;
    }
    for (int j = i - 1; j >= 0; j--) {
       reverse[k] = hex[j];
       k++;
    }
    return reverse;
}
