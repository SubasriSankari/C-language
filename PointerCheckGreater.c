#include <stdio.h>
#include <stdlib.h>

int* printGreatest(int *num1, int * num2)
{
    if(*num1 > *num2)
        return num1;
    return num2;
}

int main(){
    
    printf("\n****** greatest of two numbers using pointer ******\n\n");

    int *num1 = malloc(sizeof(int));
    int *num2 = malloc(sizeof(int));
    printf("Enter any two digit number:\n");
    scanf("%d",num1);
    scanf("%d",num2);
    int *result = printGreatest( num1 , num2 );
    printf("The Greatest of two number is %d.", *result );
}