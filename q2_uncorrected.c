#include<stdio.h>
int main(){
	int r=8,i,j,n,s;
	for(i=0;i<r;i++){
		n=1;
		for(s=0;s<r-i;s++){
			printf(" ");
		}
		for(j=0;j<=i;j++){
			printf("%d \t",n);
			n=n*(i-j)/(j+1);
		}
		printf("\n");
	}
	return 0;
}
