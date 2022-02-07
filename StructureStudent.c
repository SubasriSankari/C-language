#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

typedef struct student{
    int rollNum;
    char name[30];
    int sub1;
    int sub2;
    int sub3;
    int total;
    int percentage;
}Student;

int main(){
    int count;
    printf("Enter the number of Students to store the information:\n");
    scanf("%d",&count);
    Student stud[count];
    for(int ind = 0 ; ind < count ; ind ++ )
    {
        printf("\nPlease Enter the no %d Student details:\n", ind + 1);
        printf("Enter the Roll number of the Student:");
        scanf("%d",&stud[ind].rollNum);
        printf("Enter the name of the Student:");
        scanf("%s",stud[ind].name);
        printf("Enter the Tamil Subject mark:");
        scanf("%d",&stud[ind].sub1);
        printf("Enter the English Subject mark:");
        scanf("%d",&stud[ind].sub2);
        printf("Enter the Science Subject mark:");
        scanf("%d",&stud[ind].sub3);
        stud[ind].total = stud[ind].sub1 + stud[ind].sub2 + stud[ind].sub3 ;
        stud[ind].percentage = stud[ind].total / 3 ; 
    }
    for(int ind = 0 ; ind < count ; ind ++)
    {
        printf("\nThe Student no %d details are:\n", ind + 1);
        printf("The Roll number is : %d\n", stud[ind].rollNum);
        printf("The name of the Student is %s\n",stud[ind].name);
        printf("The total mark of the Student is %d\n",stud[ind].total);
        printf("Percentage of the mark is %d\n",stud[ind].percentage);   
    }
    
    return 0;
}