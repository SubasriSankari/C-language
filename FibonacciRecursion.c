#include<stdio.h>

int main(){
    printf("\n****** Fibonacci Series ****** \n\n");
    int arr[20];
    arr[0] = 0;
    arr[1] = 1;
    for(int ind = 2; ind <= 20 ; ind ++)
    {
        arr[ind] = arr[ind-1] + arr[ind-2];
    }
    printf("Fibonacci Series of First 20 numbers are:\n");
    for(int ind = 0; ind <= 20 ; ind ++)
    {
        printf("%d ",arr[ind]);
    }
    printf("\n");
}
