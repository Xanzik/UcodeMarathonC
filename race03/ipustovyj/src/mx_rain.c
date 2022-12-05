#include "header.h"

void mx_rain() {
    curs_set(0);
    init_pair(1, COLOR_WHITE, COLOR_BLACK);
    init_pair(2, COLOR_GREEN, COLOR_BLACK);
    time_t  timer;
    srand((unsigned) time(&timer));
    int width;
    int height;
    
    getmaxyx(stdscr, height, width);
    int body[width];
    
    for (int i = 0; i < width; i++) {
        body[i] = -height + rand() % height;
    }
    int area[width];
    
    for (int i = 0; i < width; i++) {
        area[i] = rand() % height;
    }
    int length[width];
    
    for (int i = 0; i < width; i++) {
         length[i] = 0;
    }
    int space[width];
    int end[width];
    int limit[width];
    int speed = 70;
    char *symbol[width];
    int color_pos = 2;
    int color_type = 1;
    int textcolor = COLOR_GREEN;
    int bgcolor = COLOR_BLACK;
    
    
    while (true) {
        for (int i = 0; i < width; i++) {
            if (i % 5 == 0) {
                space[i] = body[i] - area[i];
                if (limit[i] == 1) {
                    if (end[i] == height+1) {
                        limit[i] = 0;
                    }
                    move(end[i], i);
                    printw(" ");
                    end[i]++;
                }
                if (body[i] == height) {
                    length[i] = 0;
                    body[i] = 0;
                    limit[i] = 1;
                    end[i] = height - area[i];
                    area[i] = rand() % height;
                }
                if(space[i] > -1) {
		    printw(" ");
		    move(space[i], i);
	            printw(" ");
		}
                if (body[i] > -1) {
                    symbol[i] = mx_display(length[i], i, body[i], height, symbol[i]);  
                }
            }
        }
        for(int i = 0; i < width; i++) {
            if (body[i] >= 0) {
                length[i]++;
            }
        }
        usleep(1000 * speed);
        refresh();
        for(int i = 0; i < width; i++) {
            body[i]++;
        }
        char buff = getch();
        
        switch (buff) {
            case 'q':
                clear();
                exit(0);
                break;

            case 'f':
                color_type = 1;
                break;

            case 'b':
                color_type = 2;
                break;

            case '+':
                if (speed > 1) {
                    if (speed <= 15) {
                        speed--;
                    }
                    else {
                        speed -= 5;
                    }
                }
                break;

            case '-':
                if (speed < 250) {
                    if (speed <= 15) {
                        speed++;
                    }
                    else {
                        speed += 5;
                    }
                }
                break;

            case '1':
                if (color_type == 1) {
                    textcolor = COLOR_GREEN;
                }
                else {
                    bgcolor = COLOR_GREEN;
                }
                break;

            case '2':
                if (color_type == 1) {
                    textcolor = COLOR_BLUE;
                }
                else {
                    bgcolor = COLOR_BLUE;
                }
                break;

            case '3':
                if (color_type == 1) {
                    textcolor = COLOR_CYAN;
                }
                else {
                    bgcolor = COLOR_CYAN;
                }
                break;

            case '4':
                if (color_type == 1) {
                    textcolor = COLOR_MAGENTA;
                }
                else {
                    bgcolor = COLOR_MAGENTA;
                }
                break;

            case '5':
                if (color_type == 1) {
                    textcolor = COLOR_RED;
                }
                else {
                    bgcolor = COLOR_RED;
                }
                break;

            case '6':
                if (color_type == 1) {
                    textcolor = COLOR_YELLOW;
                }
                else {
                    bgcolor = COLOR_YELLOW;
                }
                break;

            case '7':
                if (color_type == 1) {
                    textcolor = COLOR_WHITE;
                }
                else {
                    bgcolor = COLOR_WHITE;
                }
                break;

            case '8':
                if (color_type == 1) {
                    textcolor = COLOR_BLACK;
                }
                else {
                    bgcolor = COLOR_BLACK;
                }
                break;

            case '0':
                color_pos = 2;
                break;

            case '.':
                color_pos = 1;
                break;
        }
        init_pair(color_pos, textcolor, bgcolor);
    }
}

