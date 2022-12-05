#include "header.h"

char *mx_display(int x, int y, int start, int max_y, char *prev) {
    char *sym;
    char *symbol[] = SYMBOLS;
    
    sym = symbol[rand() % 25];
    attron(COLOR_PAIR(1));
    mvaddstr(x, y, sym);
    attroff(COLOR_PAIR(1));
    attron(COLOR_PAIR(2));
    mvaddstr(x - 1, y, prev);
    attroff(COLOR_PAIR(2));
    if (start == max_y - 1) {
        attron(COLOR_PAIR(2));
        mvaddstr(x, y, prev);
        attroff(COLOR_PAIR(2));
    }
    return sym;
}

