#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

typedef struct date{
    int dd;
    int mm;
    int yy;
}Date;

typedef struct library{
    char stud_name[40];
    long long int stud_reg_num;
    char stud_dept[30];
    int no_of_books_wants;
    int currently_Total_no_of_books_having;
    char book_id[20];
    Date issued_date;
    Date returning_date;
    int fine_amount;
}Library;

const int monthDays[12]	= { 31, 28, 31, 30, 31, 30,	31, 31, 30, 31, 30, 31 };
Library student;
Date currentDate;

int countLeapYears(Date d)
{
	int years = d.yy;
	if (d.mm <= 2)
		years--;
	return (years / 4) - (years / 100) + (years / 400);
}

int getDifference(Date dt1, Date dt2)
{
	long int n1 = dt1.yy * 365 + dt1.dd;
	for (int i = 0; i < dt1.mm - 1; i++)
		n1 += monthDays[i];
	n1 += countLeapYears(dt1);

	long int n2 = dt2.yy * 365 + dt2.dd;
	for (int i = 0; i < dt2.mm - 1; i++)
		n2 += monthDays[i];
	n2 += countLeapYears(dt2);

	return (n2 - n1);
}

void AddStudentRecord(Library student)
{
    FILE *file = fopen("LibraryRecords.txt","a");
    fwrite(&student, sizeof(Library),1,file);
    fclose(file);
}

int CheckUserExistOrNot(){
    FILE *file = fopen("LibraryRecords.txt","r");
    Library admin;
    int count = 1;
    while(fread(&admin, sizeof(Library),1,file))
    {
        if(admin.stud_reg_num == student.stud_reg_num)
        {
            count = admin.currently_Total_no_of_books_having + 1;
        }
    }
    return count;
}

void Books_Issue(){
    time_t timer;
	timer = time(NULL);
	struct tm date = {0};
	date = *gmtime(&timer);
    student.issued_date.dd = date.tm_mday;
	student.issued_date.mm = date.tm_mon + 1;
	student.issued_date.yy = date.tm_year + 1900;
    
    printf("\nTo issue the Book Please enter the below details to store:\n\n");
    printf("Enter the Students Register number:\n");
    scanf("%lld",&student.stud_reg_num);
    int count = CheckUserExistOrNot(student);
    printf("Enter the Student Name:\n");
    scanf("%s",student.stud_name);    
    printf("Enter the Department of the Student:\n");
    scanf("%s",student.stud_dept);
    printf("Enter the number of books student wants:\n");
    scanf("%d",&student.no_of_books_wants);
    int temp = student.no_of_books_wants;
    while(temp)
    {
        printf("\n\nEnter the Book %d Details:\n\n", student.no_of_books_wants - temp + 1 );
        printf("Enter the Book ID:\n");
        scanf("%s",student.book_id);
        printf("Issue Date is %d/%d/%d.\n",student.issued_date.dd, student.issued_date.mm, student.issued_date.yy);
        printf("Please enter the Returning Date of the book %s.\n",student.book_id);
        scanf("%d/%d/%d",&student.returning_date.dd , &student.returning_date.mm, &student.returning_date.yy);
        printf("The Returning Date is: %d/%d/%d\n\n",student.returning_date.dd , student.returning_date.mm, student.returning_date.yy);
        student.fine_amount = 0;
        student.currently_Total_no_of_books_having = count++;
        AddStudentRecord(student);
        temp--;
    }
}

int CheckForFineAmount(long long int reg){
    FILE *file = fopen("LibraryRecords.txt","r");
    Library admin;
    int amount = 0;
    while(fread(&admin, sizeof(Library),1,file))
    {
        if(admin.stud_reg_num == reg)
        {
            amount += admin.fine_amount;
        }
    }
    return amount;
}

void removeTotalBooks(long long int reg)
{
    FILE *file = fopen("LibraryRecords.txt","r");
    FILE *temp = fopen("temp1.txt","w");
    FILE *storage = fopen("returnedBookStorage","a");
    Library admin;
    while(fread(&admin, sizeof(Library),1,file))
    {
        if(admin.stud_reg_num == reg)
        {
            fwrite(&admin, sizeof(Library),1,storage);
        }
        else
            fwrite(&admin, sizeof(Library),1,temp);
    }
    fclose(file);
    fclose(temp);
    fclose(storage);

    file = fopen("LibraryRecords.txt","w");
    temp = fopen("temp1.txt","r");
    while(fread(&admin, sizeof(Library),1,temp))
    {
        fwrite(&admin, sizeof(Library),1,file);
    }
    fclose(file);
    fclose(temp);
}

void Books_Return(){

    long long int reg;
    printf("\nPlease enter the Register number:\n");
    scanf("%lld",&reg);
    int count;
    printf("How many you want to return now ? \n --->");
    scanf("%d",&count);
    int temp = count;
    int fine = CheckForFineAmount(reg);
    printf("\nYour fine amount is : %d. Pay this amount to return the Books.\n",fine);
    
    printf("You can pay respective Book as well as Total fine Amount also... Thats your wish.\n\n");
    int choice;
    printf("1. Total amount\n");
    printf("2. Respective Book\n --->");
    scanf("%d",&choice);

    if(choice == 1)
    {
        removeTotalBooks(reg);
    }
    else{
        while(count)
        {
            char id[20];
            printf("Enter the %d Book ID number :\n",temp - count + 1);
            scanf("%s",id);

            FILE *file = fopen("LibraryRecords.txt","r");
            FILE *temp = fopen("temp1.txt","w");
            FILE *storage = fopen("returnedBookStorage","a");
            Library admin;
            while(fread(&admin, sizeof(Library),1,file))
            {
                if(admin.stud_reg_num == reg && !strcmp(admin.book_id, id))
                {
                    fwrite(&admin, sizeof(Library),1,storage);
                }
                else
                    fwrite(&admin, sizeof(Library),1,temp);
            }
            fclose(file);
            fclose(temp);
            fclose(storage);

            file = fopen("LibraryRecords.txt","w");
            temp = fopen("temp1.txt","r");
            while(fread(&admin, sizeof(Library),1,temp))
            {
                fwrite(&admin, sizeof(Library),1,file);
            }
            fclose(file);
            fclose(temp);
            count--;
        }
        printf("\n\nYour Books are returned Successfully...\n\n");
    }
}

void ListTheLibraryRecord()
{
    FILE *file = fopen("LibraryRecords.txt","r");
    printf("The details are:\n\n");
    Library admin;
    int count = 1;
    printf("-----------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
    printf("S.Num | Stud Name | Stud Reg Num   | Stud Dept | Buying Book count  | Book ID | Issued Date | Returning Date | Fine Amount | Currently having books\n" );
    printf("-----------------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
    while(fread(&admin, sizeof(Library),1,file))
    {
        printf("  %d\t%s\t    %lld\t%s\t\t%d\t   %s      %d/%d/%d\t  %d/%d/%d\t\t%d\t\t%d\n",count,admin.stud_name, admin.stud_reg_num, admin.stud_dept, admin.no_of_books_wants, admin.book_id, admin.issued_date.dd, admin.issued_date.mm, admin.issued_date.yy, admin.returning_date.dd, admin.returning_date.mm, admin.returning_date.yy, admin.fine_amount,admin.currently_Total_no_of_books_having);
        count++;
    }
    printf("-----------------------------------------------------------------------------------------------------------------------------------------------------------------------\n\n");
}

void Admin(){
    char user[] = "Admin";
    char password[] = "Library";
    char entered_user[20];
    char entered_pass[20];
    printf("\n ****** Admin Page ****** \n\n");
    printf("Please Enter the User Name:\n");
    scanf("%s",entered_user);
    printf("Please Enter the Password:\n");
    scanf("%s",entered_pass);
    if(!strcmp(user, entered_user) && !strcmp(password,entered_pass))
    {
        ListTheLibraryRecord();
    }
    else
    {
        printf("\nError!! Please Enter the Correct user name and password...\n\n");
    }
}

void Student(){
    int choice;
    printf("\n\n****** Students Profile ******\n");
    printf("\n1. Books Issue\n");
    printf("2. Books Return\n");
    printf("3. Exit\n\n\n --->");
    scanf("%d",&choice);
    switch(choice){
        case 1:
            Books_Issue();
            break;
        case 2:
            Books_Return();
            break;
        case 3:
            printf("Failed to update..\n");
            exit(1);
        default:
            printf("Error!! Invalid key...");
            return;
    }
}

void UpdateRecord(){
    FILE *file = fopen("LibraryRecords.txt","r");
    FILE *temp = fopen("temp.txt","w");
    Library admin;
    time_t timer;
	timer = time(NULL);
	struct tm date = {0};
	date = *gmtime(&timer);
    currentDate.dd = date.tm_mday;
	currentDate.mm = date.tm_mon + 1;
	currentDate.yy = date.tm_year + 1900;
    while(fread(&admin, sizeof(Library),1,file))
    {
        int days = getDifference(admin.returning_date,currentDate);
        if( days > 0)
        {
            admin.fine_amount = days * 10;
            fwrite(&admin, sizeof(Library),1,temp);
        }
        else{
            fwrite(&admin,sizeof(Library),1,temp);
        }
    }
    fclose(file);
    fclose(temp);

    file = fopen("LibraryRecords.txt","w");
    temp = fopen("temp.txt","r");
    while(fread(&admin, sizeof(Library),1,temp))
    {
        fwrite(&admin,sizeof(Library),1,file);
    }
    fclose(file);
    fclose(temp);
}

int main(){
    printf("\n````````````````````````    Welcome to Library Management System    ````````````````````````\n\n");
    /*FILE *file = fopen("LibraryRecords.txt","a");
    Library admin;
    admin.stud_reg_num = 412417106010;
    strcpy(admin.stud_name, "vindhya");
    strcpy(admin.stud_dept, "CSE");
    admin.returning_date.dd = 12;
    admin.returning_date.mm = 10;
    admin.returning_date.yy = 2021;
    admin.no_of_books_wants = 1;
    admin.issued_date.dd = 01;
    admin.issued_date.mm = 10;
    admin.issued_date.yy = 2021;
    admin.fine_amount = 0;
    admin.currently_Total_no_of_books_having = 1;
    strcpy(admin.book_id , "capps2376");
    fwrite(&admin,sizeof(Library),1,file);
    fclose(file);*/
    UpdateRecord();
    while (1)
    {
        int choice;
        printf("1. Admin\n");
        printf("2. Student\n");
        printf("3. Exit\n\n --->");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                Admin();
                break;
            case 2:
                Student();
                break;
            case 3:
                printf("\nThank You:)\n\n");
                exit(0);
            default:
                printf("\nError!! Invalid key....Please Choose again to continue\n\n");

        }
    }
    
    return 0;
}


