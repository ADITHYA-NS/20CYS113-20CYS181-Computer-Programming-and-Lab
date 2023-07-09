#include<stdio.h>

int main() {
    int i, x, y, z;
    char name[5][20];
    int EBnumber[5];
    int units[5];
    double bill[5];
    
    for(i = 0; i < 5; i++) {
        printf("Enter the name:");
        scanf("%s", name[i]);
    }
    
    for(i = 0; i < 5; i++) {
        printf("Enter the EB number:");
        scanf("%d", &EBnumber[i]);
    }
    
    for(i = 0; i < 5; i++) {
        printf("Enter the units:");
        scanf("%d", &units[i]);
    }
    
    for(i = 0; i < 5; i++) {
        if(units[i] == 100) {
            bill[i] = 0;
        }
        else if(units[i] > 100 && units[i] <= 400) {
            x = units[i] - 100;
            bill[i] = (double) x * 2.25;
        }
        else if(units[i] > 400 && units[i] <= 500) {
            x = units[i] - 100;
            y = x - 300;
            bill[i] = (300 * 2.25) + ((double) y * 4.50);
        }
        else if(units[i] > 500) {
            x = units[i] - 100;
            y = x - 300;
            z = y - 100;
            bill[i] = (300 * 2.25) + (100 * 4.50) + ((double) z * 6.00);
        }
        else {
            printf("Invalid units entered.\n");
            bill[i] = 0;
        }
    }
    
    for(i = 0; i < 5; i++) {
        printf("Name: %s, EB Number: %d, Units: %d, Bill: %f\n", name[i], EBnumber[i], units[i], bill[i]);
    }
    
    return 0;
}
