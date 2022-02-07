#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

void CountOccurrence(char str[] , char ch)
{
    int len = strlen(str);
    int count = 0;
    for(int ind = 0 ; ind < len ; ind ++)
    {
        if(str[ind] == ch)
            count ++;
    }
    printf("In the String \"%s\", the character '%c' count of occurrence is %d.\n", str, ch, count);
}

int main(){
    
    printf("\n****** string occurrence ******\n\n");

    char str[100];
    printf("Please enter the string:\n");
    gets(str);

    char characterToCount;
    printf("Enter the character to count occurrence in a string:");
    characterToCount = getchar();

    CountOccurrence( str , characterToCount );

    getch();
    return 0;
}