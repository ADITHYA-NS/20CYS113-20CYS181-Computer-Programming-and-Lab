#include <stdio.h>

int main() {
    int i, j, r, k;
    scanf("%d", &r);

    if (0 < r && r < 25) {
        for (i = 1; i <= r; i++) {
            for (j = 1; j <= r - i; j++) {
                printf(" ");
            }
            for (k = 1; k <= (2 * i - 1); k++) {
                printf("* ");
            }
            printf("\n");
        }
    } else {
        printf("Invalid Input\n");
    }

    return 0;
}

