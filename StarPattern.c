#include<stdio.h>

int main(){
    printf("\n****** Star Pattern ******\n\n");
    for(int patt = 1 ; patt <= 4 ; patt ++)
    {
        for(int number = 1 ; number <= patt ; number ++)
        {
            printf("*");
            //printf("%d ",number);
        }
        printf("\n");
    }    
}