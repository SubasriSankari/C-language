#include <stdio.h>
#include <conio.h>

int CheckLeapYear(int year){
	if(( year % 4 == 0 ) && (( year % 400 == 0 ) || ( year % 100 != 0)))
		return 1;
	return 0;
}

int main(){
	printf("\n ****** Leap year ******\n\n");
		
	int year;
	printf("Enter the year to check:\n");
	scanf("%d",&year);

	if(CheckLeapYear(year))
		printf("This is Leap year...\n");  	
	else
		printf("This is not Leap year...\n");

	getch();
	return 0;
}