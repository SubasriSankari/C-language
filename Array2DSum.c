#include <stdio.h>

int size;
void addArray(int arr[][size])
{
    int sum = 0;
    for(int ind1 = 0 ; ind1 < size ; ind1 ++ )
    {
        for(int ind2 = 0 ;ind2 < size ; ind2 ++)
        {
            sum += arr[ind1][ind2];
        }       
    }
    printf("The Sum of the 2D array is %d:\n", sum);
}

int main()
{
    printf("\n ****** Array 2D sum ******\n\n");

    //int size;
    printf("Enter the size of the array:\n");
    scanf("%d",&size);
	int arr[size][size];

    printf("\nEnter the elements to store in the 2D array:\n");
    for(int ind = 0 ; ind < size ; ind ++)
        for(int ind1 = 0 ; ind1 < size ; ind1 ++)
            scanf("%d",&arr[ind][ind1]);

    addArray(arr);

    return 0;
}
