#include<stdio.h>

int factorial(int fact){
    if(fact<=0)
        return 1;
    return fact * factorial(fact-1);
}

int main(){
    
    int fact;
    printf("\n****** Factorial ******\n\n");
    printf("Enter the number:\n");
    scanf("%d",&fact);
    printf("Your Factorial number is %d.",factorial(fact));
    
}