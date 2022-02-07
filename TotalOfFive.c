#include <stdio.h>

void printGrade(int perc){
	if( perc > 80 )
		printf("Your grade is A+.\n");
	else if( perc >= 65 && perc <= 80 )
		printf("Your grade is A.\n");
	else if( perc >= 50 && perc <= 65 )
		printf("Your grade is B.\n");
	else if( perc >= 42 && perc <= 50 )
		printf("Your grade is C.\n");
	else 
		printf("Sorry... You are Failed:( \n");
}

int main(){
	printf("\n ****** Total Of Five Subject ******\n\n");
	
	int sub1, sub2, sub3, sub4, sub5;
	printf("Enter the First Subject Mark:\n");
	scanf("%d",&sub1);
	printf("Enter the Second Subject Mark:\n");
	scanf("%d",&sub2);
	printf("Enter the Third Subject Mark:\n");
	scanf("%d",&sub3);
	printf("Enter the Fourth Subject Mark:\n");
	scanf("%d",&sub4);
	printf("Enter the Fifth Subject Mark:\n");
	scanf("%d",&sub5);
	
	int total = sub1 + sub2 + sub3 + sub4 + sub5;
	printf("Your Total is %d.\n", total);
	
	int percentage = total / 5;
	
	printGrade(percentage);

	return 0;
}