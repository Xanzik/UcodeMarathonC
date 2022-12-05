#include "header.h"

void mx_flags_handler(int argc, char *argv[], char *flags) {
    bool sIsTrue = true;
    
    if (argc == 2) {
        if (mx_strlen(argv[1]) == 2) {
            if (argv[1][0] == '-' && argv[1][1] == 's') {
                sIsTrue = false;
            }
            else {
                write(1, "usage: ./matrix_rain [-s]\n", 31);
                exit(0);
            }
        }
    }
    else if (argc > 2) {
        write(1, "usage: ./matrix_rain [-s]\n", 31);
        exit(0);
    }              
    if (sIsTrue) {
        flags[0] = '1';
    }
}

