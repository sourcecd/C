#include <stdio.h>

// Pow test function

int power(int m, int n);

int main() {
    int i;
    for (i = 0; i < 10; i++) {
        printf("%d %d %d %d\n", i, power(2, i), power(3, i), power(-1, i));
    }
    return 0;
}

int power(int base, int n) {
    int p, i;
    p = 1;
    for (i = 1; i <= n; i++) {
        p = p * base;
    }
    return p;
}
