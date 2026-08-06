#include <stdio.h>

void printFibonacciSeries(int n, int series[]) {
    if (n <= 0) {
        return;
    }

    series[0] = 0;

    if (n == 1) {
        return;
    }

    series[1] = 1;

    for (int i = 2; i < n; i++) {
        series[i] = series[i - 1] + series[i - 2];
    }
}

int main() {
    int n;

    scanf("%d", &n);

    if (n <= 0) {
        return 0;
    }

    int fib[n];

    printFibonacciSeries(n, fib);

    for (int i = 0; i < n; i++) {
        printf("%d ", fib[i]);
    }

    return 0;
}