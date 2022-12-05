int mx_factorial_iter(int n) {
    int factorial = 1;
    for (int i = 1; i <= n; i++)
        factorial = factorial * i;
    if (factorial < 0)
        return 0;
    return factorial;
}

