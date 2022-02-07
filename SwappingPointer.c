#include <stdio.h>
#include <stdlib.h>

void printSwap(int *num1, int * num2)
{
    int temp = *num1;
    *num1 = *num2 ; 
    *num2 = temp;
}

int main(){
    
    printf("\n****** Swapping two numbers using pointer ******\n\n");

    int *num1 = malloc(sizeof(int));
    int *num2 = malloc(sizeof(int));
    printf("Enter any two digit number:\n");
    scanf("%d",num1);
    scanf("%d",num2);
    printSwap( num1 , num2 );
    printf("After swapping two number %d %d.", *num1 , *num2 );
}