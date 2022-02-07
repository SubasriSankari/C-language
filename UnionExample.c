#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

union employee{
    long long int number;
    float salary;
    char name[30];
};

int main(){
    union employee emp;
    strcpy( emp.name , "Subasri");
    printf("\nName of the Employee is %s,\n", emp.name);
    emp.number = 8248690919;
    printf("Mobile number is %lld,\n", emp.number);
    emp.salary = 40000.00;
    printf("Salary of that employee is %f.\n",emp.salary);
    return 0;
}