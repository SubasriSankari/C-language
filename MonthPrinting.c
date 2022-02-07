#include <stdio.h>

int main(){
	printf("\n ****** Printing Month ******\n\n");
	
	int month;
	printf("Enter the number to print the month: \n");
	scanf("%d",&month);
	
	switch(month){

		case 1:
			printf("This is January with 31 days.\n");
			break;
		case 2:
			printf("This is February with 28 days or 29 days.\n");
			break;
		case 3:
			printf("This is March with 31 days.\n");
			break;
		case 4:
			printf("This is April with 30 days.\n");
			break;
		case 5:
			printf("This is May with 31 days.\n");
			break;
		case 6:
			printf("This is June with 30 days.\n");
			break;
		case 7:
			printf("This is July with 31 days.\n");
			break;
		case 8:
			printf("This is August with 31 days.\n");
			break;
		case 9:
			printf("This is September with 30 days.\n");
			break;
		case 10:
			printf("This is Octobar with 31 days.\n");
			break;
		case 11:
			printf("This is November with 30 days.\n");
			break;
		case 12:
			printf("This is December with 31 days.\n");
			break;
		default:
			printf("Sorry... You entered Wrong number:(\n"); 
	}
	
	return 0;
}