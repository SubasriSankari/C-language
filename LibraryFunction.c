
#include <stdio.h>
#include <ctype.h>
#include <math.h>
#include <conio.h>
 
int main()
{
	printf("\n ****** Library Function ******\n\n");
	
   	char ch;
   	int number;	
   	printf("Enter any character to check is digit or not :\n");
   	scanf("%c", &ch);

   	if(isdigit(ch))
   		printf("Entered character is digit");
   	else
      		printf("Entered character is not digit");

   	printf("\nEnter the number to Calculate Square root:\n");
	scanf("%d",&number);
	printf("Square root of the number is %lf.\n\n", sqrt(number));
	getch();
}