#include <ncurses.h>
#include <unistd.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

#define SYMBOLS {"ᚠ", "ᚡ", "ᚢ", "ᚣ", "ᚤ", "ᚥ", "ᚦ", "ᚧ", "ᚨ", "ᚬ", "ᚭ", "ᚮ", "ᚯ", "ᚱ", "ᚷ", "ᚻ", "ᚺ", "ᛃ", "ᛄ", "ᚸ", "ᛔ", "ᛖ", "ᛗ", "ᛥ", "ᛪ"}

unsigned int mx_strlen(const char *s);
char *mx_display(int x, int y, int start, int max_y, char *prev);
void mx_flags_handler(int argc, char *argv[], char *flags);
void mx_start(void);
void mx_rain();
void mx_text_type(char* str);

