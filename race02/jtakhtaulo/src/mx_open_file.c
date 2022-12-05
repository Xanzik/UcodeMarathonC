#include "../inc/minilibmx.h"

int mx_open_file(char *filename) {
    int f = open(filename, 0);
    if (f < 0) {
        return -1;
    }
    return f;
}
