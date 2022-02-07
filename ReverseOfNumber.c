#include <stdio.h>

int rev = 0, rem;
int reverse(int num){
    if(num){
        rem = num % 10;
        rev = (rev * 10) + rem;
        reverse(num / 10);
    }
    return rev;
}

int main()
{
    printf("\n ****** Reverse a number ******\n\n");

    int number;
    printf("Enter a number to reverse:\n");
    scanf("%d", &number);

    printf("\nThe reverse of the number is %d.\n",reverse(number));

    return 0;
}