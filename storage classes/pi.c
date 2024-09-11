// Write a macro that defines the value of PI. Use the macro to find the area of circle

#include<stdio.h>
#define PI 3.14

int main(){

    float area, r;
    printf("Enter radius: ");
    scanf("%f", &r);

    area= PI * r*r;

    printf("Area of circle : %.2f",area);

    return 0;
    
}