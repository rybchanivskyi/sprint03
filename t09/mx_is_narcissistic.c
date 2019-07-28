#include <stdbool.h>
double mx_pow(double n, unsigned int pow);

bool mx_is_narcissistic(int num) {
    int copy = num;
    int count = 0;
    int res = 0;
    int copy1 = num;

    while (copy > 0) {
        copy /= 10;
        ++count;
    }
    for (int i = 1; i <= count; ++i) {
        res += mx_pow(copy1 % 10, count);
        copy1 /= 10;
    }
    if (num == res && num != 0) {
        return true;
    }
    return false;
}
