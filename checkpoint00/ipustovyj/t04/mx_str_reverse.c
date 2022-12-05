void mx_str_reverse(char *s) {
	char temp;
	int min = 0;
	int x = 0;
	int max;
	while (s[x++]);
	x -= 1;
    max = x - 1;
    while (max > min) {
    	temp = s[min];
    	s[min] = s[max];
    	s[max] = temp;
        min++;
        max--;
    }
}

