int mx_strlen(const char *s) {
    char c = s[0];
    int sum = 0;
    int x = 0;
    while(c != '\0') {
        sum++;
        c = s[++x];
    }
    return sum;
}

