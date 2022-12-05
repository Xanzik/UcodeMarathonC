#include "../inc/minilibmx.h"

bool mx_operand_check(char *operand, int op_size, int i) {
    char *str = mx_itoa(i);
    int str_size = mx_strlen(str);
    bool isCorrect = true;

    for (int i = 0; i < op_size - str_size; i++) {
        if (mx_isdigit(operand[i]) && operand[i] != '0') {
            isCorrect = false;
            break;
        }
    }
    for (int i = op_size - str_size, str_i = 0; i < op_size; i++, str_i++) {
        if (operand[i] != '?' && operand[i] != str[str_i]) {
            isCorrect = false;
            break;
        }
    }
    free(str);
    str = NULL;
    return isCorrect;
}
