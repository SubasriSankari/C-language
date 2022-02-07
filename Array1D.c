#include <stdio.h>
#define SIZE 10

void printElements(int arr[])
{
    printf("\nThe array of elements are:\n");
    for(int ind = 0 ; ind < SIZE ; ind ++ )
        printf("%d ",arr[ind]);
}

int main()
{
    printf("\n ****** Array 1D ******\n\n");

    int arr[SIZE];
    printf("Enter the array of 10 elements to store:\n");
    for(int ind = 0 ; ind < SIZE ; ind ++)
        scanf("%d",&arr[ind]);
    
    printElements(arr);
    
    return 0;
}