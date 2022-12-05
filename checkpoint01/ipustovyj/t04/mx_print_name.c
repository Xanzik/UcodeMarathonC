#include <unistd.h>

void mx_printchar(char c) {
    write(1, &c, 1);
}

void mx_printint(int n) {
    int tmp = 0;
    int reverse = 0;

    while(n > 0) {
        int digit = n % 10;
        n /= 10;
        reverse *= 10;
        reverse += digit;
    }

    while (reverse > 0) {
        tmp = reverse % 10;
        mx_printchar(tmp + 48);
        reverse /= 10;
    }
}

int mx_strlen(const char *s) {
    char c = s[0];
    int sum = 0;
    int i = 0;

    while(c != '\0') {
        sum++;
        c = s[++i];
    }
    return sum;
}

void mx_printstr(const char *s) {
    write(1, s, mx_strlen(s));
}

int main (int argc, char *argv[]) {
    mx_printstr(argv[0]);
    mx_printstr("\n");
    mx_printint(argc);
    mx_printstr("\n");
    return 0;
}
