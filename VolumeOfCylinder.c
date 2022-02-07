#include<stdio.h>
#define PI 3.141

double CalculateVolume(int ht, int rad)
{
    double result = PI * rad * rad * ht ;
    return result;
}

int main(){
    int height, radius;
    printf("\n****** Volume of Cylinder ******\n\n");
    printf("Enter the height of the cylinder:\n");
    scanf("%d",&height);
    printf("Enter the radius of the cylinder:\n");
    scanf("%d",&radius);
    printf("Your Volume is %lf.", CalculateVolume(height, radius));
}