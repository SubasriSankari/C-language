#include <stdio.h>
#define SIZE 10

int addElements(int arr[])
{
    int sum = 0;
    for(int ind = 0 ; ind < SIZE ; ind ++ )
        sum += arr[ind];
    return sum;
}

int main()
{
    printf("\n ****** Array 1D Sum of 10 elements ******\n\n");

    int arr[SIZE];
    printf("Enter the array of 10 elements to store:\n");
    for(int ind = 0 ; ind < SIZE ; ind ++)
        scanf("%d",&arr[ind]);
    
    printf("\nThe sum of the array is : %d \n", addElements(arr));
    
    return 0;
}