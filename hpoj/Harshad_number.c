#include<stdio.h>
int isHarshad(int x){
    if(x>0){
    int l=0,n,i,y,s=0,r;
    n=x;
    r=x;
    while(n>0){
        l=l+1;
        n=n/10;
    }
    for(i=0;i<l;i++){
        y=r%10;
        s=s+y;
        r=r/10;
    }
    if(x%s==0){
        return 1;
    }
    else{
        return 0;
    }
    }
    else{
        return -1;
    }
    
}
int main(){
    int a,b;
    scanf("%d",&a);
    b=isHarshad(a);
    if(b==1){
        printf("%d  is a Harshad number.",a);
    }
    else if(b==0){
        printf("%d is not a Harshad number.",a);
    }
    else{
        printf("Number should be greater than 0.");
    }
    return 0;
}