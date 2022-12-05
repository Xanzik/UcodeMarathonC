#include "mx_cp.h"

int main(int argc, char *argv[]) {
    if (argc != 3) {
        write(2, "usage: ./mx_cp [source_file] [destination_file]\n", 48);
        return -1;
    }
    int file1 = open(argv[1], 0);
    if (file1 < 0) {
    	write(2, "mx_cp: ", 7);
        write(2, argv[1], mx_strlen(argv[1]));
        write(2, ": No such file or directory\n", 28);
        return -1;
    }
    int file2 = open(argv[2], O_CREAT | O_EXCL | O_WRONLY, S_IWUSR | S_IRUSR);
    char c;
    while (read(file1, &c, 1)) {
        write(file2, &c, 1);
    }
    close(file1);
    close(file2);
    return 0;
}

