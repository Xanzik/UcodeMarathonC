void mx_printstr(const char *s);
char *mx_strchr(const char *s, int c);

int main(int argc, char *argv[]) {
    char *str = argv[0];
        while (mx_strchr(str, '/') != 0) {
            str= mx_strchr(str, '/');
            str++;
            argc++;
        }
    mx_printstr(str);
    mx_printstr("\n");
    return 0;
}

