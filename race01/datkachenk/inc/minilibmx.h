#ifndef PART_OF_THE_MATRIX_H
#define PART_OF_THE_MATRIX_H

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

int mx_check_x(char *argv[], char *x);
int mx_check_op(char *argv[], char *op);
int mx_check_y(char *argv[], char *y);
int mx_check_z(char *argv[], char *z);
bool mx_operand_check(char *operand, int op_size, int i);
void mx_main(char *x, char *operation, char *y, char *z);
void mx_print(long long x, char *op, long long y, long long z);

#endif

