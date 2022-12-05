#include "../inc/mx_wc.h"

char *mx_itoa(int num) {
    char *number_string = NULL;
    int length = 0;
    int num_cpy = num;
    if (num == 0) {
        number_string = malloc(1);
        number_string[0] = '0';

        return number_string;
    }
    if (num_cpy < 0) {
        length++;
        num_cpy *= -1;
    }
    while (num_cpy != 0) {
        num_cpy /= 10;
        length++;
    }
    number_string = malloc(length);
    if (num < 0) {
        number_string[0] = '-';
        num *= -1;
    }
    number_string[length--] = '\0';
    while ((num != 0 && length >= 0) && number_string[length] != '-') {
        number_string[length--] = (num % 10) + '0';
        num /= 10;
    }
    return number_string;
}
