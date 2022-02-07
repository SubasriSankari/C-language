#include<stdio.h>

int main(){
    printf("\n****** Odd numbers printing ******\n\n");
    for(int number = 0 ; number <= 10 ; number ++ ){
        if( number % 2 == 1 )
        {
            printf("The odd number is %d\n",number);
        }
    }
    return 0;
}