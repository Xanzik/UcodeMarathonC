#include "../inc/minilibmx.h"

int mx_check_op(char *argv[], char *op) {
    int opsize = mx_strlen(op);
    
    if (opsize != 1) {
        mx_printerr("Invalid operation: ");
        mx_printerr(argv[2]);
        mx_printerr("\n");
        return 2;
    }
    else if (*op != '+' && *op != '-' && *op != '*' && *op != '/' && *op != '?') {
        mx_printerr("Invalid operation: ");
        mx_printerr(argv[2]);
        mx_printerr("\n");
        return 2;
    }
    return 0;
}


