#include <stdio.h>

int addition (int num1, int num2, int num3)
{
    return num1-(-num2)-(-num3);
}

int main()
{
    printf("\n ****** Addition of Three number without using addition operator ******\n\n");

    int number1, number2, number3;
    printf("Enter the First number:\n");
    scanf("%d", &number1);
    
    printf("Enter the Second number:\n");
    scanf("%d", &number2);

    printf("Enter the Third number:\n");
    scanf("%d", &number3);

    printf("Addition of Three number is %d.\n", addition( number1, number2, number3 ));    

    return 0;
}