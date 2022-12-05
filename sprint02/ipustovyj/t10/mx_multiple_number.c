bool mx_multiple_number(int n, int mult) {
	if (n > 0
	    && mult % n == 0) {
		return true;
	}
	return false;
}

