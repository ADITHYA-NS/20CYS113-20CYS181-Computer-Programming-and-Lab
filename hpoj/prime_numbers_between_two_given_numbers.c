#include <stdio.h>

int isPrime(int x) {
    int f = 1, i;
    if (x < 2) {
        f = 0;
    } else {
        for (i = 2; i<= x/2; i++) {
            if (x % i == 0) {
                f = 0;
                break;
            }
        }
    }
    return f;
}

void generatePrimes(int p, int q) {
    int m, j;
    printf("Prime numbers between %d and %d are: ", p, q);
    for (m = p; m <= q; m++) {
        j = isPrime(m);
        if (j == 1) {
            printf("%d ", m);
        }
    }
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    generatePrimes(a, b);
    return 0;
}
