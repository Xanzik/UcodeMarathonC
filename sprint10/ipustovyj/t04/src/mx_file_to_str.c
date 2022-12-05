#include "../inc/mx_wc.h"

char *mx_file_to_str(char *filename) {
    char *dst = NULL;
    int size = 0;
    char c;
    int f = mx_open_file(filename);
    while (read(f, &c, 1)) {
        size++;
    }
    close(f);
    f = mx_open_file(filename);
    dst = malloc(size);
    for (int i = 0; read(f, &c, 1); i++) {
        dst[i] = c;
    }
    close(f);
    return dst;
}
