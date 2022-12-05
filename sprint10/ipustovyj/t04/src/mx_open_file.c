#include "../inc/mx_wc.h"

int mx_open_file(char *filename) {
    int f = open(filename, 0);
    if (f < 0) {
        mx_printerr("error\n", 6);
    }
    return f;
}
