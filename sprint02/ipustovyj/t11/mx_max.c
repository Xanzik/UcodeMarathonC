int mx_max(int a, int b, int c) {
	int max = a;
	if (a < b) 
		max = b;
	if (a < c) 
		max = c;
	return max;
}

