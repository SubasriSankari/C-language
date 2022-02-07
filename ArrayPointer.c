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

int main(){
    
    printf("\n****** print array using pointer ******\n\n");

    printf("Enter the size of the array:\n");
    scanf("%d",&size);
    int array[size];
    printf("Enter the array elements:\n");
    for(int ind = 0 ; ind < size ; ind ++)
    {
        scanf("%d",&array[ind]);
    }
    int *ptr = array;
    printArray(ptr);
}