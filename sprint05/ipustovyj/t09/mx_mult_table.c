#include <stdbool.h>
int mx_atoi(const char *str);
void mx_printchar(char c);
void mx_printint(int n);
bool mx_isdigit(int c);

int main(int argc, char *argv[]) {
    if (argc <= 2)
        return 0;
	if (!mx_isdigit(*argv[1]) 
		|| !mx_isdigit(*argv[2]))
		return 0;
    int x = mx_atoi(argv[1]);
    int y = mx_atoi(argv[2]);
    int temp = 0;
    int diff = 0;
    if (argc < 2)
        return 0; 
    if (x < 1 
    	|| y < 1 
        || x > 9 
        || y > 9) 
        return 0;
    if (y < x) {
        temp = y;
        y = x;
        x = temp;
    }
    if (y % 2 == 1 
    	|| (x % 2 == 1 
    		&& x != 1))
        return 0;
    else {
        diff = y - x;
        for (int i = 0; i <= diff; i++) {
            for (int j = 0; j <= diff; j++) {
                mx_printint((x + i) * (x + j));
                if (j != diff)
                    mx_printchar('\t');
            }
            mx_printchar('\n');
        }
    }
    return 0;
}

