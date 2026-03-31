#include <stdio.h>

int alternateDigitSum(int n) {
    int digits[10];
    int len = 0;

    // Extract digits (reverse)
    while (n > 0) {
        digits[len++] = n % 10;
        n /= 10;
    }

    int sum = 0;
    int sign = 1;

    // Traverse from left to right
    for (int i = len - 1; i >= 0; i--) {
        sum += sign * digits[i];
        sign *= -1;  // alternate sign
    }

    return sum;
}