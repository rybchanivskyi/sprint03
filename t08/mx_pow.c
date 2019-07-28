double mx_pow(double n, unsigned int pow) {
    double res = n;

    for (int i = 2; i <= pow; ++i) {
        res *= n;
    }
    return res;
}
