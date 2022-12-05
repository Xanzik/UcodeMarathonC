int mx_strlen(const char *s);
int mx_strncmp(const char *s1, const char *s2, int n);
char *mx_strchr(const char *s, int c);

char *mx_strstr(const char *s1, const char *s2) {
    int l = mx_strlen(s1);
    char *a = '\0';
    int i = 0;
    for ( ; i <= l; i++) {
        if (mx_strncmp(s1++, s2, mx_strlen(s2)) == 0) {
            s1--;
            break;
        }
    }
    a = mx_strchr(s1, s2[0]);
    return a;
}

