#include <stdio.h>

int main()
{
    printf("\n ****** count 1s bit from integer input ******\n\n");

    int number;
    printf("Enter the number:\n");
    scanf("%d",&number);

    int temp = number;
    int count1s = 0;
    while(temp)
    {
        if(temp & 1)
            count1s ++;
        temp = temp >> 1;
    }
    printf("The number %d's 1s count is %d.\n",number,count1s);

    return 0;
}