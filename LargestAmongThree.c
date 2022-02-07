#include <stdio.h>
#include <conio.h>

int main(){
	printf("\n ****** Largest Among Three ******\n\n");
	int num1, num2, num3;

	printf("Enter the First number:\n");
	scanf("%d",&num1);
	printf("Enter the Second number:\n");
	scanf("%d",&num2);
	printf("Enter the Third number:\n");
	scanf("%d",&num3);

	if(num1 > num2){
		if(num1 > num3)
			printf("Largest number is %d.\n",num1);
		else
			printf("Largest number is %d.\n",num3);
	}
	else if(num2 > num3)
		printf("Largest number is %d.\n",num2);		
	else
		printf("Largest number is %d.\n",num3);
	
	getch();
	return 0;
}