#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

enum week{
    sun = 1 , mon = 2 , tue = 3 , wed = 4 , thu = 5 , fri = 6 , sat = 7 
};

int main(){
    enum week day;
    day = wed;
    printf("You entered the day of enum value is %d.\n", day);
    return 0;
}