#include <stdbool.h>

bool mx_isdigit(int c);
int mx_atoi(const char *str);
void mx_printint(int n);
void mx_printchar(char c);
bool mx_isspace(int c);

int main(int argc, char *argv[]) {
    int sum = 0;
    int temp = 0;
	char *check = 0;

    for (int i = 1; i < argc; i++) {
		check = argv[i];
        if (!mx_isspace(*check)) {
            if (*check == '+' || *check == '-')
                check++;
            if (*check != '+' || *check != '-') {
                while(mx_isdigit(*check))
                    check++;
                if (*check == '\0') {
                    temp = mx_atoi(argv[i]);
                    sum = sum + temp;
                }
            }
        }
    }
    if (sum == 0) {
        mx_printchar('0');
        mx_printchar('\n');
    }
    else {
        mx_printint(sum);
        mx_printchar('\n');
    }
    return 0;
}

