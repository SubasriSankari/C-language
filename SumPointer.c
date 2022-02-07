#include <stdio.h>
#include <stdlib.h>

void printSum(int *num1, int * num2)
{
    printf("The Sum of two number is (using pointer) : %d\n", *num1 + *num2);
}

int main(){
    
    printf("\n****** sum of two numbers using pointer ******\n\n");

    int *num1 = malloc(sizeof(int));
    int *num2 = malloc(sizeof(int));
    printf("Enter any two digit number:\n");
    scanf("%d",num1);
    scanf("%d",num2);
    printSum( num1 , num2 );
}