#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

typedef struct employee{
    int id;
    char name[30];
    long long int number;
    char workingFromOffice[3];
}Emp;

int main(){
    int count;
    printf("Enter the number of employee to store the information:\n");
    scanf("%d",&count);
    Emp employee[count];
    for(int ind = 0 ; ind < count ; ind ++ )
    {
        printf("\nPlease Enter the no %d employee details:\n", ind + 1);
        printf("Enter the ID of the employee:");
        scanf("%d",&employee[ind].id);
        printf("Enter the name of the employee:");
        scanf("%s",employee[ind].name);
        printf("Enter the 10 digit mobile number of the employee:");
        scanf("%lld",&employee[ind].number);
        printf("Is this employee now WFO (Yes/No)??");
        scanf("%s",employee[ind].workingFromOffice);
    }
    for(int ind = 0 ; ind < count ; ind ++ )
    {
        printf("\nThe Employee no %d details are:\n", ind + 1);
        printf("\nID of the employee:");
        printf("%d",employee[ind].id);
        printf("\nName of the employee:");
        printf("%s",employee[ind].name);
        printf("\nThe 10 digit mobile number of the employee:");
        printf("%lld",employee[ind].number);
        printf("\nWorking From Office --> ");
        printf("%s\n",employee[ind].workingFromOffice);
    }

    return 0;
}