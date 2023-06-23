#include<stdio.h>
int main() {
    int num,num1,td,fd,ld,n,swapnum;
    scanf("%d",&num);
    num1=num;
    while(num1>0)
    { num1=num1/10;
    td=td+1;
    }
    ld=num%10;
    fd=num/(int)pow(10,td-1);
    n=(num%(int)pow(10,td-1))-ld;
    swapnum=(ld*pow(10,td-1))+n+fd;
    printf("%d",swapnum);
    return 0;
    
}