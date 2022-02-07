#include<stdio.h>
int main()
{
    int num;
    FILE *f1, *f2, *f3, *f4;
    f1=fopen("read.txt", "r");
    f2=fopen("odd.txt", "w");
    f3=fopen("even.txt", "w");
    f4=fopen("prime.txt", "w");
    if(f1==NULL || f3==NULL || f4==NULL)
    {
        printf("Error in opening file\n");
        exit(0);

    }
    else 
    

    {
        fscanf(f1, "%d", &num);
        if()
    }
    return 0;

}