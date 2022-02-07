#include<stdio.h>

void numberPrinting(int num)
{
    for(int patt = 1 ; patt <= 4 ; patt ++)
    {
        for(int number = 1 ; number <= patt ; number ++)
        {
            printf("%d ",num++);
            //printf("%d ",number);
        }
        printf("\n");
    }  
}

int main(){
    printf("\n****** Number Pattern ******\n\n");

    int number = 1; 
    numberPrinting(number);
    return 0;  
}