#include "../inc/minilibmx.h"

int mx_check_x(char *argv[], char *x) {
    int xsize = mx_strlen(x);
    
    if (xsize < 1) {
        mx_printerr("Invalid operand: ");
        mx_printerr(argv[1]);
        mx_printerr("\n");
        return 2;
    }
    for (int i = 0; i < xsize; i++) {
        if (i == 0 && x[i] == '-') {
            continue;
        }
        if (x[i] != '?' && !mx_isdigit(x[i])) {
            mx_printerr("Invalid operand: ");
            mx_printerr(argv[1]);
            mx_printerr("\n");
            return 2;
        }
    }
    return 0;
}

