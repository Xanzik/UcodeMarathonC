#include "../inc/calculator.h"

int mx_add(int a, int b)
{
    return a + b;
}
int mx_sub(int a, int b)
{
    return a - b;
}
int mx_mul(int a, int b)
{
    return a * b;
}
int mx_div(int a, int b)
{
    return a / b;
}
int mx_mod(int a, int b)
{   
    return a % b;
}

int main (int argc, char *argv[]) {
    char errmsg[] = "usage: ./calc [operand1] [operation] [operand2]";
    if (argc == 1) 
    {
        write(1, &errmsg, mx_strlen(errmsg));
        return 0;
    }

    int x = mx_atoi(argv[1]);
    int y = mx_atoi(argv[3]);
    enum e_operation oper;
    enum e_error error;
    bool is_oper = false;
    bool is_error = false;

    if (x == NOT_INT || y == NOT_INT) 
    {
        error = INCORRECT_OPERAND;
        is_error = true;
    }
    else if (mx_strncmp(argv[2], "/", 1) == 0) 
    {
        oper = DIV;
        is_oper = true;
    }
    else if (mx_strncmp(argv[2], "*", 1) == 0) 
    {
        oper = MUL;
        is_oper = true;
    }
    else if (mx_strncmp(argv[2], "%%", 1) == 0) 
    {
        oper = MOD;
        is_oper = true;
    }
    else if (mx_strncmp(argv[2], "+", 1) == 0) 
    {
        oper = ADD;
        is_oper = true;
    }
    else if (mx_strncmp(argv[2], "-", 1) == 0) 
    {
        oper = SUB;
        is_oper = true;
    }
    else 
    {
        error = INCORRECT_OPERATION;
        is_error = true;
    }
    if (y == 0 && oper == DIV) 
    {
        error = DIV_BY_ZERO;
        is_error = true;
    }
    if (is_error == true)
    {
        if (error == INCORRECT_OPERAND) 
        {
            mx_printerr("error: invalid number");
            return -1;
        }
        else if (error == DIV_BY_ZERO) 
        {
            mx_printerr("error: division by zero");
            return -1;
        }
        else if (error == INCORRECT_OPERATION) 
        {
            mx_printerr("error: invalid operation");
            return -1;
        }
    }
    if (is_oper == true)
    {
        if (oper == ADD) 
        {
            mx_printint(mx_add(x, y));
        }
        else if (oper == SUB) 
        {
            mx_printint(mx_sub(x, y));
        }
        else if (oper == MUL) 
        {
            mx_printint(mx_mul(x, y));
        }
        else if (oper == DIV) 
        {
            mx_printint(mx_div(x, y));
        }
        else if (oper == MOD) 
        {
            mx_printint(mx_mod(x, y));
        }
        mx_printchar('\n');
    }

    return 0;
}

