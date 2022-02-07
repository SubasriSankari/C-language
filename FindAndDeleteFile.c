#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFFER_SIZE 1000

void replaceAll(char *str, const char *oldWord, const char *newWord)
{
    char *pos, temp[BUFFER_SIZE];
    int index = 0;
    int len;

    len = strlen(oldWord);

    if (!strcmp(oldWord, newWord)) {
        return;
    }

    while ((pos = strstr(str, oldWord)) != NULL)
    {
        strcpy(temp, str);
        index = pos - str;
        str[index] = '\0';
        strcat(str, newWord);
        strcat(str, temp + index + len);
    }
}

int main()
{
    FILE * fPtr;
    FILE * fTemp;
    char path[100];
    char c;
    char buffer[BUFFER_SIZE];
    char oldWord[100], newWord[100];

    printf("Enter path of source file: \n");
    gets(path);

    fPtr  = fopen(path, "r");
    fTemp = fopen("replace.tmp", "w");

    if (fPtr == NULL || fTemp == NULL)
    {
        printf("\nError to open file.\n");
        exit(1);
    }

    c = getc(fPtr);
    while (c != EOF)
    {
        printf("%c", c);
        c = getc(fPtr);
    }
    rewind(fPtr);

    printf("\nEnter word to replace: \n");
    gets(oldWord);

    printf("\nReplace '%s' with: \n",oldWord);
    scanf("%s", newWord); 
    
    while ((fgets(buffer, BUFFER_SIZE, fPtr)) != NULL)
    {
        replaceAll(buffer, oldWord, newWord);
        fputs(buffer, fTemp);
    }
    fclose(fPtr);
    fclose(fTemp);
    remove(path);
    rename("replace.tmp", path);
    printf("\nSuccessfully replaced all occurrences of '%s' with '%s'.\n", oldWord, newWord);

    fPtr = fopen(path, "r");
    c = getc(fPtr);
    while (c != EOF) {
        printf("%c", c);
        c = getc(fPtr);
    }
    fclose(fPtr);

    printf("\n\nThank You:)\n\n");

    return 0;
}