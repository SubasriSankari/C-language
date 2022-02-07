#include <stdio.h>

int main(){
	printf("\n ****** Increment and Decrement ******\n\n");
	int num;

	printf("Enter the number:\n");
	scanf("%d",&num);

	printf("Pre Increment %d\n", ++num);
	printf("Post Increment %d\n", num++);
	printf("Pre Decrement %d\n", --num);
	printf("Post Decrement %d\n", num--);
	
	return 0;
}