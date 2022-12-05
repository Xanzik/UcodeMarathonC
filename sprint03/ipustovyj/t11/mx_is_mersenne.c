#include <stdbool.h>

double mx_pow(double n, unsigned int pow);
bool mx_is_prime(int num);

bool mx_is_mersenne(int n) {
    int find = 0;
    int a = 0;
    int prime = 0;
    if (n > 0) {
    	while (find < n) {
        	if (mx_is_prime(a)) {
            	prime = a;
        	}
        	find = mx_pow(2 , prime) - 1;
        	a++;
    	}
    }
    if (find == n) {
        return true;
    }
    return false;
}

