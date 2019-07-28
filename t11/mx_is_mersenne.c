#include <stdbool.h>
bool mx_is_prime(int num);
double mx_pow(double n, unsigned int pow);

bool mx_is_mersenne(int n) {
    int n2 = n + 1;

    if (mx_is_prime(n)) {
        for (int i = 2; mx_pow(2, i) <= n2; ++i) {
            if (mx_pow(2, i) == n2) {
                return true;
            }
            mx_pow(2, i);
        }
    }
    return false;
}
