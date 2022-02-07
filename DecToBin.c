#include <stdio.h>

int main(){

	printf("\n ****** Decimal to Binary ******\n\n");
	int num;
	printf("Enter the number:\n");
	scanf("%d",&num);

	int temp = num;
	int rem = 0 , loop = 1;
	unsigned int binaryValue = 0;

	while(temp){
		rem = temp % 2;
		temp /= 2 ;
		binaryValue += (rem * loop);
		loop *= 10;
	}
	printf("Your Binary Value is %u.\n", binaryValue);	

	return 0;
}