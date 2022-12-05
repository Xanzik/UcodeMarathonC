#include "get_address.h"

char *mx_strnew(const int size) {
	if (size <= 0) {
		return NULL;
	}
	char *string = (char *) malloc(size + 1);
	for (int i = 0; i < size + 1; i++) {
		string[i] = '\0';
	}	
	return string;
}
