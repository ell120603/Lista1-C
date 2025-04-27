#include <stdio.h>

int exponencia(int x, int n);
int main() {
    int x = 3, n = 4;
    printf("%d\n", exponencia(x, n));
    return 0;
}

int exponencia(int x, int n) {
    if (n == 0) return 1;
    if (n % 2 == 0) {
        int half = exponencia(x, n / 2);
        return half * half;
    } else {
        return x * exponencia(x, n - 1);
    }
}

