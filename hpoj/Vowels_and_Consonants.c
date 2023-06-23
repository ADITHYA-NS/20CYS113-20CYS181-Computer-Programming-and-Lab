#include<stdio.h>
int main() {
    char Vowel[10] = {'A', 'E', 'I', 'O', 'U', 'a', 'e', 'i', 'o', 'u'};
    char var, flag = 'F';
    int i;
    scanf("%c", &var);
    for (i = 0; i <= 9; i++) {
        if (var == Vowel[i]) {
            flag = 'T';
            break;
        }
    }
    if (flag == 'T')
        printf("Vowel.");
    else
        printf("Consonant.");
    return 0;
}