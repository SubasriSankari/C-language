#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

int SearchElement( char* str , char ch )
{
    int result = 0;
    while(*str != '\0')
    {
        if(*str == ch )
        {
            result = 1;
            break;
        }
        str ++;
    }
    return result;
}

int main(){
    printf("\n****** Search String using Pointer ******\n\n");

    char str[30], search;
    printf("Enter the String:\n");
    gets(str);
    printf("Enter the character to be search:\n");
    search = getchar();

    int result = SearchElement( str , search );
    
    if(result)
        printf("Success... You found the Element.\n");
    else
        printf("Sorry That element is not found.\n");
    return 0;
}