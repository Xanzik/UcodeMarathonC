#include "../inc/minilibmx.h"

void mx_main(char *x, char *operation, char *y, char *z) {
    if (*operation == '?') {
        mx_main(x, "+", y, z);
        mx_main(x, "-", y, z);
        mx_main(x, "*", y, z);
        mx_main(x, "/", y, z);
        return;
    }
    int xsize = mx_strlen(x);
    int ysize = mx_strlen(y);
    int zsize = mx_strlen(z);
    bool xIsNegative = false;
    bool yIsNegative = false;
    bool zIsNegative = false;
    
    if (x[0] == '-') {
        xIsNegative = true;
        x++;
        xsize--;
    } 
    if (y[0] == '-') {
        yIsNegative = true;
        y++;
        ysize--;
    }
    if (z[0] == '-') {
        zIsNegative = true;
        z++;
        zsize--;
    }
    long long op1 = mx_atoi(x);
    long long op2 = mx_atoi(y);
    long long result = mx_atoi(z);
    
    for (long long i = 0; i < mx_pow(10, xsize); i++) {
        if (op1 > 0) {
            i = op1;
        }
        if (!mx_operand_check(x, xsize, i)) {
            continue;
        }
        for (long long j = 0; j < mx_pow(10, ysize); j++) {
            if (op2 > 0) {
                j = op2;
            }
            if (!mx_operand_check(y, ysize, j)) {
                continue;
            }
            for (long long k = 0; k < mx_pow(10, zsize); k++) {
                if (result > 0) {
                    k = result;
                }
                if (!mx_operand_check(z, zsize, k)) {
                    continue;
                }
                if (xIsNegative) {
                    i *= -1;
                }
                if (yIsNegative) {
                    j *= -1;
                }
                if (zIsNegative) {
                    k *= -1;
                }
                mx_print(i, operation, j, k);
                
                if (xIsNegative) {
                    i *= -1;
                }
                if (yIsNegative) {
                    j *= -1;
                }
                if (zIsNegative) {
                    k *= -1;
                }
                if (result > 0) {
                    break;
                }
            }
            if (op2 > 0) {
                break;
            }
        }
        if (op1 > 0) {
            break;
        }
    }
    if (xIsNegative) {
        x--;
    }
    if (yIsNegative) {
        y--;
    }
    if (zIsNegative) {
        z--;
    }
}

