void mx_printerr(const char *s) {
	int x = 0;
	while (s[x++]);
	x--;
	write(2, s, x);
}

