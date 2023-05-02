#include <stdio.h>
#define REWARD 10
int main() {
	double start,end,reward;
	printf("Enter the readings of odometer at the beginning:");
	scanf("%lf",&start);
	printf("Enter the reading of odometer at the end:");
	scanf("%lf",&end);
	reward=(end-start)*REWARD;
	printf("Reward= %f",reward);
	return 0;
}
	
