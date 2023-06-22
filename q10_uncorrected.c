#include<stdio.h>

struct Complex_No{
	int real;
	int img;
};
int main(){
	struct Complex_No s1,s2,s3;
	printf("Enter the real part for 1st complex number:");
	scanf("%d",&s1.real);
	printf("Enter the imaginary part for 1st complex number:");
        scanf("%d",&s1.img);
	printf("Enter the real part for 2nd complex number:");
        scanf("%d",&s2.real);
	printf("Enter the imaginary part for 2nd complex number:");
        scanf("%d",&s2.img);
	s3.real=s1.real*s2.real;
	s3.img=s1.img*s2.img;
	printf("Product:%d+%di",s3.real,s3.img);
	return 0;
}

