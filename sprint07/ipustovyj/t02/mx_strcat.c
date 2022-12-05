int mx_strlen(const char *s);

char *mx_strcat(char *s1, const char *s2) {
    char *temp = s1;
    while (*s1 != '\0')
    {
        s1++;
    }
    
    while (*s2 != '\0') {
        *s1++ = *s2++;
    }
    *s1 = '\0';
    return temp;
}
