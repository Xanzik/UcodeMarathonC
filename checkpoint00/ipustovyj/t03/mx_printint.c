#include <unistd.h>

void mx_printint(int n) {
	int l = 0;
	char array[255];
	if (n == 0) 
		write(1, "0", 1);
	if (n < 0) {
		n *= -1;
		write(1, "-", 1);
	}
	while (n != 0) {
		for (int i = 0; n != 0; i++) {
			array[i] = (n % 10) + '0';
			n /= 10;
			l = i;
		}
	} 
	for (int x = l; x >= 0; x--) {
		write(1, &array[x], 1);
	}
	write(1, "\n", 1);
}

