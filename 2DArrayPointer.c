#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

int row, col;

void printArray( int array[row][col] )
{
    printf("\nYour 2D array is:\n");
    for(int ind1 = 0 ; ind1 < row ; ind1 ++)
    {
        for(int ind2 = 0 ; ind2 < col ; ind2 ++)
        {
            printf("%d ", *(*( array + ind1 ) + ind2 ));
        }
        printf("\n");
    }
}

int main(){
    printf("\n****** 2D Array Pointer ******\n\n");

    printf("Enter the row number:\n");
    scanf("%d", &row );
    printf("Enter the column number:\n");
    scanf("%d", &col );
    
    printf("Enter the array element ( Row is %d and Column is %d):\n", row , col );
    int array[row][col];
    for(int ind1 = 0 ; ind1 < row ; ind1 ++)
        for(int ind2 = 0 ; ind2 < col ; ind2 ++)
            scanf("%d", (*(array+ind1)+ind2));

    printArray(array);
    
    return 0;
}