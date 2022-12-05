#include "../inc/mx_wc.h"

void mx_printerr(const char *err, int err_len) {
    write(2, err, err_len);
    exit(-1);
}
