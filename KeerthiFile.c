#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

time_t timer;
timer = time(NULL);
struct tm date = {0};
date = *gmtime(&timer);
currentDate.dd = date.tm_mday;
currentDate.mm = date.tm_mon + 1;
currentDate.yy = date.tm_year + 1900;

typedef struct{
    int dd, mm, yy;
}date;

typedef struct{
    int id;
    char name[20];
    char dept_name[20];
    date dateOfIssue;
    int noOfBooksHaving;
}Student;

FILE *fpt;
Student s1;
void writefile()
{
    system("cls");
    printf("ID: ");
    scanf("%d", &s1.id);
    int count = readIfUserExist(s1.id);
    fflush(stdin);
    printf("name: ");
    scanf("%s", s1.name);
    fflush(stdin);
    printf("Department: ");
    scanf("%s", s1.dept_name);
    s1.no_of_books_wants = count;
    fflush(stdin);
   
    printf("dob(dd/mm/yyyy): ");
    scanf("%d/%d/%d", &s1.dob.dd, &s1.dob.mm, &s1.dob.yy);
    fflush(stdin);

    fpt=fopen("student.txt", "w+");
    fwrite(&s1, sizeof(Student), 1, fpt);
    fclose(fpt);

}
void read()
{
    fpt=fopen("student.txt", "r");
    FILE * temp = fopen("temp.txt","w");
    if(fpt==NULL)
    {
        printf("eRROR IN OPENING FILE\n");
    }
        
    while(fread(&s1, sizeof(Student), 1, fpt))
    {
        /*if(s1.id == 1)
        {
            s1.noOfBooksHaving = 1;
            fwrite(&s1,sizeof(Student),1,temp);
        }
        else
        {
            fwrite(&s1,sizeof(Student),1,temp);
        }*/
        if(s1.id !=1)
        {
            fwrite(&s1,sizeof(Student),1,temp);
        }
    }
    fclose(fpt);
    fclose(temp);
    rename("temp.txt","student.txt");
}
void noOfRecords()
{
    rewind(fpt);
    fseek(fpt, 0, SEEK_END);
    int bytes=ftell(fpt);
    printf("\n Number of Records = %d", bytes/(sizeof(Student)));
}

int readIfUserExist(int idOfUser){

    fpt=fopen("student.txt", "r");
    if(fpt==NULL)
    {
        printf("eRROR IN OPENING FILE\n");
    }
    int status = 1;
        
    while(fread(&s1, sizeof(Student), 1, fpt))
    {
        if(s1.id == idOfUser)
        {
            status = 0;
            noOfBooksHaving++;
        }
    }
    fclose(fpt);
    if(status)
        return 1;
    return noOfBooksHaving;
}

int main()
{

    int choice;
    do{
        printf("\nEnter choice: ");

        scanf("%d", &choice);
        readIfUserExist();

        writefile();
    }while(choice!=0);
    
    noOfRecords();
    read();

    return 0;
}