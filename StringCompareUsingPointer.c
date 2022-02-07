#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

int StringCompare( char* str1 , char* str2 )
{
    int result = 1;
    while(*str1 != '\0' && *str2 != '\0')
    {
        if(*str1 != *str2 )
        {
            result = 0;
            break;
        }
        str1 ++;
        str2 ++;
    }
    return result;
}

int main(){
    printf("\n****** String Comparison using Pointer ******\n\n");

    char str1[30],str2[30];
    printf("Enter the First String:\n");
    scanf("%s",str1);
    printf("Enter the Second String:\n");
    scanf("%s",str2);
    int result = StringCompare( str1 , str2 );
    if(result)
        printf("Both Strings are equal\n");
    else
        printf("Sorry They are not equal\n");
    return 0;
}