#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    
    printf("\n****** string manipulation ******\n\n");

    char str[100];
    printf("Please enter the string:\n");
    scanf("%s",str);
    int len = strlen(str);
    printf("Your string length is %d.",len);
}