#pragma once

const int W = 21;
const int H = 10;

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

bool mx_isdigit(int i);
bool mx_isspace(char c);
char *mx_itoa(int number);
char *mx_strnew(const int size);
char *mx_strtrim(const char *str); 
int mx_strlen(const char *s);
int mx_atoi(const char* str);
double mx_pow(double n, unsigned int pow);
void mx_printchar(char c);
void mx_printerr(const char *s);
void mx_printint(int n);
void mx_printstr(const char *s);
int mx_open_file(char *filename);
void mx_check_x_points(int i);
void mx_check_y_points(int i);