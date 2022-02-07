#include<stdio.h>

int main(){
    printf("\n****** Goto ******\n\n");
    int number;

    printf("Enter the number to check odd or even:\n");
    scanf("%d",&number);
    
    if(number % 2 == 0)
        goto evenNumber;
    else    
        goto oddNumber;
        
    oddNumber:
        printf("This is Odd number");
        return 0;
    evenNumber:
        printf("This is Even number");
    
}