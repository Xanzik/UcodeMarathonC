#include "../inc/minilibmx.h"

int mx_check_y(char *argv[], char *y) {
    int ysize = mx_strlen(y);
    
    if (ysize < 1) {
        mx_printerr("Invalid operand: ");
        mx_printerr(argv[3]);
        mx_printerr("\n");
        return 2;
    }
    for (int i = 0; i < ysize; i++) {
        if (i == 0 && y[i] == '-') {
            continue;
        }
        if (y[i] != '?' && !mx_isdigit(y[i])) {
            mx_printerr("Invalid operand: ");
            mx_printerr(argv[3]);
            mx_printerr("\n");
            return 2;
        }
    }
    return 0;
}


