int mx_count_words(const char *str, char delimiter) {
    int c = 1;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == delimiter) {
            if (str[i] == str[i - 1]) {
                i++;
            }
            else {
                c++;
            }
        }
    }
    return c;
}

