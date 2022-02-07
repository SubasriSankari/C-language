#include <stdio.h>
#include <stdlib.h>

int main(){
    printf("\n ****** non-zero print first ****** \n\n");

    int size;
    printf("Enter the size of Array:\n");
    scanf("%d",&size);

    int array[size];
    int non_zero = 0;
    printf("Enter the %d element to store into the array:\n", size);
    for(int ind = 0 ; ind < size ; ind ++)
    {
        scanf("%d",&array[ind]);
    }

    for(int ind = 0 ; ind < size ; ind ++)
    {
        if(array[ind] != 0)
        {
            array[non_zero++] = array[ind];
        }
    }
    for(int ind = non_zero ; ind < size ; ind ++)
    {
        array[ind] = 0;
    }
    printf("After Changing the array becomes as below:\n");
    for(int ind = 0 ; ind < size ; ind ++)
    {
        printf("%d ",array[ind]);
    }


}