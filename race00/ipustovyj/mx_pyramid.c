void mx_printchar(char c);

void mx_pyramid(int n) {
	if (n > 1) {
    int right = 1;
    int space = 1;
    int left = n - 1;
    for (int j = 0; j < left; j++) {
        mx_printchar(' ');
    }
    left--;
    mx_printchar('/');
    mx_printchar('\\');
    mx_printchar('\n');
    for (int i = 0; i < (n / 2) - 1; i++) {
        for (int j = 0; j < left; j++) {
            mx_printchar(' ');
        }
        left--;
        mx_printchar('/');
        for (int j = 0; j < space; j++) {
            mx_printchar(' ');
        }
        space += 2;
        mx_printchar('\\');
        for (int j = 0; j < right; j++) {
            mx_printchar(' ');
        }
        right++;
        mx_printchar('\\');
        mx_printchar('\n');
    }
    right--;
    for (int j = 0; j < (n / 2) - 1; j++) {
        for (int j = 0; j < left; j++) {
            mx_printchar(' ');
        }
        left--;
        mx_printchar('/');
        for (int j = 0; j < space; j++) {
            mx_printchar(' ');
        }
        space += 2;
        mx_printchar('\\');
        for (int j = 0; j < right; j++) {
            mx_printchar(' ');
        }
        right--;
        mx_printchar('|');
        mx_printchar('\n');
    }
    left--;
    mx_printchar('/');
    for (int i = 0; i < space; i++) {
        mx_printchar('_');
	}
    mx_printchar('\\');
    mx_printchar('|');
    mx_printchar('\n');
    }
}

int main(void) {
	mx_pyramid(2);
	return 0;
}


