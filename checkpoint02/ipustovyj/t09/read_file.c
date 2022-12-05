#include <unistd.h>
#include <fcntl.h>

void mx_printerr(const char *s) {
	int x = 0;
	while (s[x++]);
	x--;
	write(2, s, x);
}

int main(int argc, char *argv[]) {
	if (argc != 2) {
		mx_printerr("usage: ./read_file [file_path]\n");
		return -1;
	}
	int file = open(argv[1], 0);
	if (file < 0) {
		mx_printerr("error\n");
        return -1;
    }
    char c;
	while (read(file, &c, 1) > 0) {
        write(1, &c, 1);
    }
    close(file);
    return 0;
}

