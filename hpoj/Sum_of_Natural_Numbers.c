#include<stdio.h>
int main() {
    int N;
    int sum;
    sum=0;
    scanf("%d",&N);
    while(N>0)
    { sum=sum+N;
      N=N-1;
    }
    printf("%d",sum);
    return 0;
    }
