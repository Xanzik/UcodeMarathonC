#pragma once

#include <stdlib.h>
#include <stdbool.h>

bool mx_isdigit(int i);
bool mx_isalpha(int c);
bool mx_islower(int c);
bool mx_isupper(int c);
unsigned long mx_hex_to_nbr(const char *hex);

