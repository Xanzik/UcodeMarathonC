#include "../inc/minilibmx.h"

int mx_check_z(char *argv[], char *z) {
    int zsize = mx_strlen(z);
    
    if (zsize < 1) {
        mx_printerr("Invalid result: ");
        mx_printerr(argv[4]);
        mx_printerr("\n");
        return 2;
    }
    for (int i = 0; i < zsize; i++) {
        if (i == 0 && z[i] == '-') {
            continue;
        }
        if (z[i] != '?' && !mx_isdigit(z[i])) {
            mx_printerr("Invalid result: ");
            mx_printerr(argv[4]);
            mx_printerr("\n");
            return 2;
        }
    }
    return 0;
}


