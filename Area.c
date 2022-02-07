#include <stdio.h>
#include <conio.h>
#define PI 3.141

void AreaOfCircle(int num){
	printf("Area of Circle is %lf.\n", PI * num * num);
}

void AreaOfRectangle(){
	int width, length;
	printf("Enter the width of Rectangle:\n");
	scanf("%d", &width);
	printf("Enter the length of Rectangle:\n");
	scanf("%d", &length);
	printf("Area of Rectangle is %d.\n", length * width);
}

void AreaOfSquare(int num){
	printf("Area of Square is %d.\n", num * num);
}
	
void AreaOfTriangle(){
	int base, height;
	printf("Enter the height of Rectangle:\n");
	scanf("%d", &height);
	printf("Enter the base of Rectangle:\n");
	scanf("%d", &base);
	printf("Area of Triangle is %d.\n", (base * height) / 2);
}

int main(){
	printf("\n ****** Area Calculation ******\n\n");
	
	int number;
	printf("Enter the number to calculate Area:\n");
	scanf("%d",&number);
	
	switch(number){
		case 11:
			AreaOfCircle(number);
			break;
		case 22:
			AreaOfRectangle();
			break;
		case 33:
			AreaOfSquare(number);
			break;
		case 44:
			AreaOfTriangle();
			break;
		default:
			printf("Sorry... You entered wrong number:(");
	}
	getch();
	return 0;
}