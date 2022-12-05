#include <boolstd.h>
#include <stdlib.h>

bool mx_isdigit(int i) {
    if (i > 47 
    	&& i < 58) {
        return 1;
    }
    else {
        return 0;
    }
}

bool mx_isspace(char c) {
	if (c == ' ' 
		|| c == '\t' 
	    || c == '\n' 
	    || c == '\v'
	    || c == '\f' 
	    || c == '\r') {
		return true;
	}
	return false;
}

int mx_atoi(const char *str) {
    int result = 0;
    bool sign = false;
    if(*str) {
        while(mx_isspace(*str))
            str++;
        if (*str == '-') {
            sign = true;
            str++;   
        }
        else if (*str == '+')
            str++; 
        while (mx_isdigit(*str)) {
            result *= 10;
            if (sign)
                result -= *str-48;
            else
                result += *str-48;
            str++;
        }
    }
    return result;
}

