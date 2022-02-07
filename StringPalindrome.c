#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    
    printf("\n****** string palindrome ******\n\n");

    char str[100];
    printf("Please enter the string:\n");
    scanf("%s",str);

    char reverse[100];
    strcpy( reverse , str );
    strrev( reverse) ;

    if(!strcmp( str , reverse ))
        printf("Wow... It's Palindrome");
    else
        printf("Sorry!... It's not Palindrome");

    return 0;
}