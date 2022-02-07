#include <stdio.h>
#define SIZE 10

int linearSearch(int arr[] , int search)
{
    int index = -1;
    for(int ind = 0 ; ind < SIZE ; ind ++ )
        if(arr[ind] == search)
            index = ind;
    return index;
}

int main()
{
    printf("\n ****** Array Linear Search ******\n\n");

    int arr[SIZE];
    printf("Enter the array of 10 elements to store:\n");
    for(int ind = 0 ; ind < SIZE ; ind ++)
        scanf("%d",&arr[ind]);

    int search;
    printf("Enter the element to search:\n ");
    scanf("%d",&search);
    
    int result =  linearSearch( arr , search );
    if(result != -1)
        printf("\nThe Element %d is found at the location of %d \n", search , result);
    else    
        printf("\nThe Element %d to be search is not found in the array\n",search);
    
    return 0;
}