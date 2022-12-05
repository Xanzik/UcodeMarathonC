#pragma once

#include <unistd.h>
#include <stdbool.h>
#include <stdlib.h>
#include <fcntl.h>

void mx_printchar(char c);
void mx_printstr(char *s);
void mx_printerr(const char *err, int err_len);
int mx_open_file(char *file);
int mx_strlen(const char *s);
int mx_word_counter(char *filename);
char *mx_file_to_str(char *filename);
char *mx_itoa(int num);
bool mx_isspace(char c);
