#include <stdbool.h>

double mx_pow(double n, unsigned int pow);

bool mx_is_narcissistic(int num) {
    int lenght = 0;
    int sum = 0;
    int temp = num;
    while (num != 0) {
    	lenght++;
    	num /= 10;
    }
    for (int i = temp; i != 0; i /= 10) {
        sum += mx_pow((i % 10), lenght);
    }
    
    if (sum == temp) {
        return true;
    }
    return false;
}

