#include "../inc/mx_wc.h"

int mx_word_counter(char *filename) {
    if (filename != NULL) {
        int count = 1;
        int lenght = mx_strlen(filename);
        char buffer = filename[0];
        for (int i = 0; i < lenght; i++) {
            if (filename[i] == ' ' && !mx_isspace(buffer)) {
                count++;
            }
            buffer = filename[i];
        }
        return count;
    }
    return 0;
}
