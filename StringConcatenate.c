#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    
    printf("\n****** string concat ******\n\n");

    char str[100];
    printf("Please enter the first string:\n");
    scanf("%s",str);

    char tailStr[100];
    printf("Please enter the second string:\n");
    scanf("%s",tailStr);
    
    strcat( str , tailStr );
    printf("After Concatenation the String will be %s.\n",str);

    return 0;
}