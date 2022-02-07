#include <stdio.h>
#include <stdlib.h>

int size;
void printArray(int *ptr)
{
    printf("The Array elements are:\n ");
    for(int ind = 0 ; ind < size ; ind ++)
    {
        printf("%d ", *( ptr + ind ));
    }
}

void copyArray(int dest_array[] , int* ptr , int array[])
{
    for(int ind = 0 ; ind < size ; ind ++)
    {
        *(ptr + ind) = array[ind];
    }
}

int main(){
    
    printf("\n****** copy array to another array using pointer ******\n\n");

    printf("Enter the size of the array:\n");
    scanf("%d",&size);

    int array[size];
    printf("Enter the array elements:\n");
    for(int ind = 0 ; ind < size ; ind ++)
    {
        scanf("%d", &array[ind]);
    }
    
    int dest_array[size];
    int *dest_ptr = dest_array;
    copyArray( dest_array , dest_ptr , array);
    printArray( dest_ptr );
}