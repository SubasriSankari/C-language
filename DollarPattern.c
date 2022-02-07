#include<stdio.h>

int main(){
    printf("\n****** Dollar Pattern ******\n\n");
    for(int patt = 4 ; patt >= 1 ; patt --)
    {
        for(int number = 1 ; number <= patt ; number ++)
            printf(" ");
        for(int number = 4 ; number >= patt ; number --)
            printf("$ ");
        printf("\n");
        
    }    
}