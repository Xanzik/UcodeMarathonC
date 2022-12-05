int mx_atoi(const char *str) {
	int space = 0;
	int result;
	int off = 0;
	int x = 0;
	if(*str == '-') {
		off = 1;
		x++;
		}
	for ( ; space != 1; x++) {
		if (str[x] >= 48
        	&& str[x] <= 57)
			result = result * 10 + str[x] - '0';
		if (str[x] == 32
            || str[x] == '\0'
            || str[x] == '\n'
            || str[x] == '\t'
            || str[x] == '\v'
            || str[x] == '\f'
            || str[x] == '\r')
			space = 1;
	}
	if (off == 1) {
		result = -result;
	}
	return result;
}

