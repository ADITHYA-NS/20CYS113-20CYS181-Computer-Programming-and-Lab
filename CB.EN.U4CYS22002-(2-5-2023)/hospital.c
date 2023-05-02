#include <stdio.h>
int main() {
	double volume;
	double time;
	double rate;
	printf("Enter the number of minutes it should be infuced:");
	scanf("%lf",&time);
	printf("Enter the volume of medication to be infuced:");
	scanf("%lf",&volume);
	rate=volume/(time/60);
	printf("Volume of medication infuced is %lf",volume);
	printf("Rate at which pump should be set is %f mm/h \n",rate);
	return 0;
}
