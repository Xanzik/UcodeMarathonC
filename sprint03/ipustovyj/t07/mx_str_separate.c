void mx_printchar(char c);

void mx_str_separate(const char *str, char delim) {
    for(int i = 0; str[i] != '\0'; i++) {
        if (str[i] == delim) {
            mx_printchar(10);
            if (str[i - 1] == str[i]) {
                i++;
            }
        }
        else {
            mx_printchar(str[i]);
        }
    }
    mx_printchar(10);
}

