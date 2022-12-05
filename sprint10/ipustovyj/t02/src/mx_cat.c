#include "mx_cat.h"

int main(int argc, char *argv[]) {
    char c;
    int file;
    if (argc == 1) {
        while (read(0, &c, 1))
            write(1, &c, 1);
    }
    else {
        for(int i = 1; i < argc; i++) {
            file = open(argv[i], 0);
    		if (file < 0) {
       			write(2, "mx_cat: ", 8);
        		write(2, argv[i], mx_strlen(argv[i]));
        		write(2, ": No such file or directory\n", 28);
        		return -1;
    		}
            if (file != -1) {
                while (read(file, &c, 1))
                {
                    write(1, &c, 1);
                }
            }
            close(file);
        }
    }
    return 0;
}

