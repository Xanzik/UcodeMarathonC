void mx_printchar(char c);

void mx_cube(int n) {
    int width = n * 2;
    int step = n / 2 + 1;
    int size_x = width + step + 2;
    int size_y = n + step;
    if (n > 1) 
        for (int i = 0; i < size_y; i++) {
    //top
            if (i < step - 1){
                if (i == 0) {
    //first line
                    for (int a = 0; a < step; a++) {
                        mx_printchar(' ');
                    }
                    mx_printchar('+');
                    for (int a = 0; a <= width; a++) {
                        mx_printchar('-');
                    }                
                    mx_printchar('+');
                    mx_printchar('\n');
                }
    //ribs
                for (int j = 0; j < size_x; j++) {
                    if (j == step - i - 1)
                        mx_printchar('/');
                    else if (j == (step - i + width + 1))
                        mx_printchar('/');
                    else
                        mx_printchar(' ');
                }
                mx_printchar('|');
                mx_printchar('\n');
            }
    //body
            if (i == step) {
//second line
                mx_printchar('+');
                for (int a = 0; a <= width; a++) {
                    mx_printchar('-');
                }                
                mx_printchar('+');
                for (int a = 0; a < step - 1; a++) {
                    mx_printchar(' ');
                }
                mx_printchar('|'); 
                mx_printchar('\n');
            }    
            if (i > step && i < (size_y - step + 1)) {
    //lines down
                mx_printchar('|');
                for (int a = 0; a <= width; a++) {
                    mx_printchar(' ');
                }
                mx_printchar('|');
                for (int a = 0; a < step - 1; a++) {
                    mx_printchar(' ');
                }
                mx_printchar('|');
                mx_printchar('\n');
            }
    //bottom
            if (i >= size_y - step) {
    //ribs2.0
                if (i > size_y - step && i < size_y) {
                    for (int j = 0; j <= size_x - step; j++) {
                        if (j == 0)
                            mx_printchar('|');
                        else if (j == width + 2)
                            mx_printchar('|');
                        else
                            mx_printchar(' ');
                    }
                    for (int j = 0; j < size_y - i - 1; j++) {
                        mx_printchar(' ');
                    }
                    mx_printchar('/');
                    mx_printchar('\n');
                }
    //last line
                if (i == size_y - 1) {
                    mx_printchar('+');
                    for (int a = 0; a <= width; a++) {
                        mx_printchar('-');
                    }                
                    mx_printchar('+');   
                    mx_printchar('\n');             
                }
                if (i == size_y - step) {
                    mx_printchar('|');
                    for (int a = 0; a <= width; a++) {
                        mx_printchar(' ');
                    }
                    mx_printchar('|');
                    for (int a = 0; a < step - 1; a++) {
                        mx_printchar(' ');
                    }
                    mx_printchar('+');
                    mx_printchar('\n');                
                }
                // mx_printchar('\n');
            }
        }
}

int main(void) {
	mx_cube(5);
	return 0;
}

