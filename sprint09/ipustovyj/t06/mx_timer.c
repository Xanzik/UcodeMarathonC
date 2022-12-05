#include <time.h>

double mx_timer(void (*f)()) {
	double start, end;
	start = clock();
	(*f)();
	end = (clock() - start) / (CLK_TCK);
	return end;
}

