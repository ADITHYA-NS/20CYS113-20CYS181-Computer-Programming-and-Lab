#include <stdio.h>
int main() {
	int t;
	printf("Enter the hours:");
	scanf("%d",&t);
	double T;
	T=((4*t*t)/(t+2))-20;
	printf("The value for T is %f",T);
	return 0;
}
