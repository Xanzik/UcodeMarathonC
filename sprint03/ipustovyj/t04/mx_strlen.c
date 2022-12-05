int mx_strlen(const char *s) {
	int x = 0;
	while (s[x++]);
	x -= 1;
	return x;
}

