char *mx_strncpy(char *dst, const char *src, int len) {
	char *ret = dst;
	while (len--) {
		if (*src != '\0') {
			*dst++ = *src++;
		}
		else {
			*dst++ = '\0';
		}
	}
	return ret;
}

