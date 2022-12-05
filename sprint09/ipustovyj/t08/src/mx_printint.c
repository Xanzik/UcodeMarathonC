#include "../inc/minilibmx.h"

void mx_printint(int n) {
	int l = 0;
	char array[255];
	if (n == 0) 
		mx_printchar('0');
	if (n < 0) {
		n *= -1;
		mx_printchar('-');
	}
	while (n != 0) {
		for(int i = 0; n != 0; i++) {
			array[i] = (n % 10) + '0';
			n /= 10;
			l = i;
		}
	} 
	for (int x = l; x >= 0; x--) {
		mx_printchar(array[x]);
	}
}

