#include <stdio.h>

void decimalToBinary(int n) {
    int a[32];
    int i = 0;
    int y = n;
    while (y > 0) {
        a[i] = y % 2;
        y = y / 2;
        i++;
    }
    printf("Binary equivalent: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", a[j]);
    }
    printf("\n");
}

void decimalToOctal(int n1) {
    int o[32];
    int i = 0;
    int y = n1;
    while (y > 0) {
        o[i] = y % 8;
        y = y / 8;
        i++;
    }
    printf("Octal equivalent: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", o[j]);
    }
    printf("\n");
}

void decimalToHexadecimal(int n) {
    int x = n, i = 0,r;
    int h[32];
    while (x> 0) {
        r = x % 16;
          if (r<10){
            h[i]=r+'0';
          }
        else{
            h[i]=r+55;
        }
        x = x / 16;
        i++;
    }

    printf("Hexadecimal equivalent: ");
    for (int j = i - 1; j >= 0; j--) {
        if(h[j]>=10){
        printf("%c", h[j]);   
        }
        else{
            printf("%d", h[j]);
        }
        
    }
    printf("\n");
}

int main() {
    int n;
    scanf("%d", &n);
    if (n <=0) {
        printf("Error: Value should be greater than 0\n");
    } else {
        decimalToBinary(n);
        decimalToOctal(n);
        decimalToHexadecimal(n);
    }
    return 0;
}
