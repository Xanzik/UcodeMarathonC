#include <unistd.h>

int main(int argc, char **argv) {
	int x;
	for (int i = 1; i < argc; i++) {
		x = 0;
		while (argv[i][x++]);
		x--;
		write(1, argv[i], x);
		write(1, "\n", 1);
	}
	return 0;
}
