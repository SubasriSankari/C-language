#include<stdio.h>

typedef struct profile{
    int pin;
    int amount;
}person;

void CreditAmount(person pers)
{
    int amt;
    printf("Please Enter the Amount to credit:\n");
    scanf("%d",&amt);
    pers.amount += amt;
    printf("Now Your Total Amount is %d.\n",pers.amount);
    printf("Thank you!! See you again:)\n\n");
}

void Balance(person pers)
{
    printf("Your Current Balance is %d.\n",pers.amount);
}

void DebitAmount( person pers)
{
    int amt;
    printf("Please enter the amount to debit from your account:\n\n--->");
    scanf("%d",&amt);
    if((pers.amount) < amt)
    {
        printf("\nSorry... You not have enough money:( ...Please try again later\n\n");
    }
    else{
        pers.amount -= amt;
        printf("\nYour Current balance is %d.\n",pers.amount);
        printf("Thanks for using:)\n\n");
    }
}

void ChooseOption(person pers)
{
    int choice;
    printf("\n\nPlease Choose you choice:\n");
    printf("1. Credit the Amount\n");
    printf("2. Check Balance \n");
    printf("3. Debit from Account\n--->");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
            CreditAmount(pers);
            break;
        case 2:
            Balance(pers);
            break;
        case 3:
            DebitAmount(pers);
            break;
        default:
            printf("\nError Invalid key... Try again later\n\n");
    }

}

int main(){

    person person1, person2;

    person1.pin = 3452;
    person1.amount = 5000; 

    person2.pin = 6732;
    person2.amount = 2000;

    int secretNum;
    
    printf("\n\n~~~~~~~~~~~~~~~~~~~~~~  Hello... ~~~~~~~~~~~~~~~~~~~~~~~\n\n");
    printf("Please enter your four digit secret pin to continue: \n");

    scanf("%d",&secretNum);

    if(person1.pin == secretNum)
        ChooseOption(person1);
    else if(person2.pin == secretNum)
        ChooseOption(person2);
    else
        printf("\nSorry... You entered Wrong pin:(\n\n");
    
}