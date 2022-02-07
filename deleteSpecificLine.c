#include <stdio.h>
#include <stdlib.h>

int main() {
    
    FILE *fp1, *fp2;
    char filename[40];
    char c;
    int del_line, temp = 1;
    printf("Enter file name: \n");
    scanf("%s", filename);
    fp1 = fopen(filename, "r");
    c = getc(fp1);
    if(fp1 == NULL)
    {
        printf("Error... While opening file");
        exit(1);
    }
    printf("\nThe Content of the File is below:\n\n");
    while (c != EOF)
    {
        printf("%c", c);
        c = getc(fp1);
    }
    rewind(fp1);
    printf("\n\nEnter line number to be deleted:\n");
    scanf("%d", &del_line);
    fp2 = fopen("copy.c", "w");
    c = getc(fp1);
    while (c != EOF) {
        c = getc(fp1);
        if (c == '\n')
           temp++;
        if (temp != del_line)
        {
           putc(c, fp2);
        }
    }
    fclose(fp1);
    fclose(fp2);
    remove(filename);
    rename("copy.c", filename);
    printf("\n\nThe contents of file after being modified are as follows:\n\n");
    fp1 = fopen(filename, "r");
    c = getc(fp1);
    while (c != EOF) {
        printf("%c", c);
        c = getc(fp1);
    }
    fclose(fp1);
    return 0;
}