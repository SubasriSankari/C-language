#include <stdio.h>

int main(){
	printf("\n****** Calculating Simple Interest ****** \n\n");

	int principal, time;
	double rate;

	printf("Enter your principal amount: \n");
	scanf("%d",&principal);

	printf("Enter your Time period: \n");
	scanf("%d",&time);

	printf("Enter your rate of Interest: \n");
	scanf("%lf",&rate);

	int interest = (principal * time * rate)/100;
	printf("Your Simple Interest is %d.",interest);
	return 0;
}