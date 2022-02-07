#include <stdio.h>

int main()
{
    printf("\n ****** A-Z alpha printing ******\n\n");

    for(char ind = 'A' ; ind <= 'Z' ; ind ++)
    {
        printf("%c ", ind);
    }

    return 0;
}