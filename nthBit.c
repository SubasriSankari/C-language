#include <stdio.h>

int main()
{
    printf("\n ****** nth Bit ******\n\n");

    int num, nthBit, bitStatus;
    printf("Enter the number: \n");
    scanf("%d", &num);

    printf("Enter nth bit to check (0-31): \n");
    scanf("%d", &nthBit);

    bitStatus = (num >> nthBit) & 1;

    printf("The %d bit is set to %d.\n", nthBit, bitStatus);

    return 0;
}