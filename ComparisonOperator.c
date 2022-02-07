#include <stdio.h>

int main()
{
    printf("\n ****** check two integers using comparison operator ******\n\n");

    int x = 10;
    int y;
    printf("Your First number is 10.\n\n");
    printf("Enter second number:\n");
    scanf("%d",&y);
    if(!(x - y))
        printf("These Two Integers are same.\n");
    else
        printf("These Two Integers are not same.\n");

    return 0;
}