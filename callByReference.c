#include <stdio.h>
#include <stdlib.h>

void swap(int* number1, int* number2){
    int temp = *number1;
    *number1 = *number2;
    *number2 = temp;
}

int main(){
    printf("\n****** Call By Reference Example ******\n\n");
    
    int number1, number2;
    printf("Enter the First number:\n");
    scanf("%d",&number1);
    printf("Enter the Second number:\n");
    scanf("%d",&number2);
    printf("Before Swapping of two numbers:\n");
    printf("number1 : %d \nnumber2 : %d\n", number1, number2);
    swap(&number1 , &number2);
    printf("After Swapping of two numbers:\n");
    printf("number1 : %d \nnumber2 : %d\n", number1, number2);

}