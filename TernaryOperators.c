#include <stdio.h>

int main(){
	printf("\n****** Compare Two numbers using Ternary Operator ****** \n\n");
	int num1, num2;
	printf("Enter the number1:\n");
	scanf("%d",&num1);
	printf("Enter the number2:\n");
	scanf("%d",&num2);
	int result = num1 > num2 ? num1 : num2;
	printf("Bigger one is %d.\n",result);
	return 0;
}