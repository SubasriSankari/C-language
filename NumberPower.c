#include<stdio.h>

int number, power;

int NumberPower(int power){
    if(power <= 0)
        return 1;
    return number * NumberPower(power-1);
}

int main(){
    
    printf("\n****** Power ******\n\n");
    printf("Enter the number:\n");
    scanf("%d",&number);
    printf("Enter the power:\n");
    scanf("%d",&power);
    printf("Power of the number is %d.",NumberPower(power));
    
}