#include "../inc/minilibmx.h"

int main(int argc, char *argv[]) {
    if (argc != 5) {
        mx_printerr("usage: ./part_of_the_matrix [operand1] [operation] [operand2] [rezult]\n");
        return -1;
    }
    char *x = mx_strtrim(argv[1]);
    char *oper = mx_strtrim(argv[2]);
    char *y = mx_strtrim(argv[3]);
    char *z = mx_strtrim(argv[4]);
    if (mx_check_op(argv, oper) != 2 && mx_check_x(argv, x) != 2 &&
        mx_check_y(argv, y) != 2 && mx_check_z(argv, z) != 2) 
    {
        mx_main(x, oper, y, z);
    }
    free(x);
    free(y);
    free(z);
    free(oper);
    return 0; 
}

