#include <stdio.h>
#define SIZE 10

void swap(int* a, int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void printArray(int arr[])
{
    printf("\nThe Sorted Array is :\n");
	for (int i = 0; i < SIZE; i++) 
		printf("%d ", arr[i]);
}

void sortArray(int arr[])
{
    for(int ind1 = 0 ; ind1 < SIZE-1 ; ind1 ++ )
    {
        int curr = ind1;
        for(int ind2 = ind1 + 1 ; ind2 < SIZE ; ind2 ++)
            if(arr[ind2] < arr[curr])
                curr = ind2;

        swap(&arr[ind1] , &arr[curr]);        
    }
	
}

int main()
{
    printf("\n ****** Array Sorting using Selection sort ******\n\n");
    
    int arr[SIZE];
    printf("\nEnter the elements to store in the array:\n");
    for(int ind = 0 ; ind < SIZE ; ind ++)
        scanf("%d",&arr[ind]);

    sortArray(arr);
    printArray(arr);

    return 0;
}
