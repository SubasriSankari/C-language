#include <stdio.h>

int main(){
	printf("\n****** Bitwise Operators ****** \n\n");
	int num;
	printf("Enter the number:\n");
	scanf("%d",&num);
	printf("Left shift %d\n",num<<1);  // 1010 << 1 ==> 10100
	printf("Right shift %d\n",num>>1); // 1010 >> 1 ==> 0101
	return 0;
}