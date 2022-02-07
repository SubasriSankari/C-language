#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

int main(){
    printf("\n****** File Concept ******\n\n");

    FILE *fptr1, *fptr2;

    //fptr1 = fopen("C:\\C_Concept_ZOHO_training\\oddOrEven.txt","w");
    fptr2 = fopen("C:\\C_Concept_ZOHO_training\\oddOrEven.txt","a");
    if(fptr2 == NULL)
    {
        printf("Error.. Creating file\n");
        exit(1);
    }

    char str[30];
    printf("Enter the String to append in file:\n");
    gets(str);


    /*int number;
    printf("Enter the number to check odd or even:\n");
    scanf("%d",&number);
    fprintf( fptr1 , "The Number is %d.", number );
    if(number % 2 == 0)
        fprintf(fptr2,"This number is Even.");
    else
        fprintf(fptr2,"This number is odd.");
    */
    fprintf(fptr2,"%s",str);
    printf("String is appended Successfully..");
    fclose(fptr1);
    fclose(fptr2);
    return 0;
}