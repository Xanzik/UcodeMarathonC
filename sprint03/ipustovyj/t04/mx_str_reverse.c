int mx_strlen(const char *s);
void mx_swap_char(char *s1, char *s2);

void mx_str_reverse(char *s) {
    int max = mx_strlen(s) - 1;
    int min = 0;
    while(max > min) {
        mx_swap_char(&s[min], &s[max]);
        min++;
        max--;
    }
}

