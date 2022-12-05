int mx_factorial_rec(int n) {
    if (n == 1)
        return 1;
    n = mx_factorial_rec(n - 1) * n;
    if (n < 0)
        return 0;
    return n;
}

