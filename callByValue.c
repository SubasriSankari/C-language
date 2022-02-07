#include <stdio.h>
#include <stdlib.h>

int number1, number2;

void swap(){
    int temp = number1;
    number1 = number2;
    number2 = temp;
}

int main(){
    printf("\n****** Call By Value Example ******\n\n");
    
    printf("Enter the First number:\n");
    scanf("%d",&number1);
    printf("Enter the Second number:\n");
    scanf("%d",&number2);
    printf("Before Swapping of two numbers:\n");
    printf("number1 : %d \nnumber2 : %d\n", number1, number2);
    swap();
    printf("After Swapping of two numbers:\n");
    printf("number1 : %d \nnumber2 : %d\n", number1, number2);

}