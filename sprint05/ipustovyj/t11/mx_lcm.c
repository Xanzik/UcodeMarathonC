int mx_gcd(int a, int b);

int mx_lcm(int a, int b) {
	if (a == 0 && b == 0)
		return 0;
	int lcm = a * b / mx_gcd(a, b);
	if (lcm < 0)
		lcm *= -1;
	return lcm;
}

