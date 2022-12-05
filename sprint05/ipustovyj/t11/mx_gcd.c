int mx_gcd(int a, int b) {
	int gcd = b ? mx_gcd(b, a % b) : a;
	if (gcd < 0)
		gcd *= -1;
	return gcd;
}

