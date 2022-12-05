void mx_printint(int n);
void mx_printchar(char c);
int mx_atoi(const char *str);

int main(int argc, char *argv[]) {
    long long binary_num = 0;
    long long current_num = 0;
    if (argc > 1) {
        for (int i = 1; i < argc; i++) {
            current_num = mx_atoi(argv[i]);
            for (int j = 31; j >= 0; j--) {
                binary_num = current_num >> j;
                if (binary_num & 1)
                    mx_printint(1);
                else
                    mx_printint(0);
            }
            mx_printchar('\n');
        }
    }
    return 0;
}

