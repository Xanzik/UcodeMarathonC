int mx_strncmp(const char *s1, const char *s2, int n) {
    int non = 0;
    for (int i = 0; i < n; i++) {
        if (s1[i] != s2[i]) {
            non = s1[i] - s2[i];
        }
    }
    return non;
}

