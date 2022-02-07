#include <stdio.h>
#include <stdlib.h>

int row, col;
int new_row, new_col;

void printOriginalArray(int array[row][col])
{
    printf("Your Original Array is:\n");
    for(int ind1 = 0 ; ind1 < row ; ind1++)
    {
        for(int ind2 = 0 ; ind2 < col ; ind2++)
        {
            printf("%d ",array[ind1][ind2]);
        }
        printf("\n");
    }
}

void printArray(int array[row][col])
{
    int temp[new_row][new_col];
    int row_ind = 0, col_ind = 0;
    for(int ind1 = 0 ; ind1 < new_row ; ind1 ++)
    {
        for(int ind2 = 0 ; ind2 < new_col ; ind2 ++)
        {
            temp[ind1][ind2] = array[row_ind][col_ind];
            col_ind++;
            if(col_ind == col)
            {
                row_ind++;
                col_ind = 0;
            }
        }
    }

    printf("Your Reshaped Array is:\n");
    for(int ind1 = 0 ; ind1 < new_row ; ind1 ++)
    {
        for(int ind2 = 0 ; ind2 < new_col ; ind2 ++)
        {
            printf("%d ", temp[ind1][ind2]);
        }
        printf("\n");
    }
}

int main(){
    printf("\n ****** matrix reshape ****** \n\n");

    printf("Enter the row of the array:\n");
    scanf("%d",&row);
    printf("Enter the column of the array:\n");
    scanf("%d",&col);

    int array[row][col];
    printf("Enter the array Element:\n");
    for(int ind1 = 0 ; ind1 < row ; ind1++)
    {
        for(int ind2 = 0 ; ind2 < col ; ind2 ++)
        {
            scanf("%d",&array[ind1][ind2]);
        }
    }
    printOriginalArray(array);

    printf("Enter the new reshaped array row number:\n");
    scanf("%d",&new_row);
    printf("Enter the new reshaped array column number:\n");
    scanf("%d",&new_col);

    if(new_col * new_row == col * row)
    {
        printArray(array);
    }
    else
    {
        printf("Sorry.. We couldn't reshape your matrix...\n\n");
        printOriginalArray(array);
    }

}