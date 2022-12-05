#include "../inc/mx_wc.h"

int main(int argc, char *argv[]) {
    if (argc != 2) {
        mx_printerr("open: No such file or directory\n", 32);
    }
    if (argv[2] == NULL) {
    	write(2, "mx_wc: ", 7);
    	write(2, argv[1], mx_strlen(argv[1]));
    	write(2, ": No such file or directory\n", 28);
    	exit(0);
    }
    int line_count = 1;
    int word_count = mx_word_counter(mx_file_to_str(argv[1]));
    int byte_count = 0;
    char c;
    int f = mx_open_file(argv[1]);
    while (read(f, &c, 1) > 0) {
        byte_count += sizeof(c);
        if (c == '\n') {
            line_count++;
        }
    }
    mx_printstr(mx_itoa(line_count));
    mx_printchar(' ');
    mx_printstr(mx_itoa(word_count));
    mx_printchar(' ');
    mx_printstr(mx_itoa(byte_count));
    mx_printchar(' ');
    mx_printstr(argv[1]);
    mx_printchar('\n');

    close(f);
    return 0;
}
