#include <stdbool.h>

bool mx_is_odd(int value) {
	if (value == 0
	   || value % 2 == 0) { 
		return false;
	}
	else {
		return true;
	}
}

