// WAF to calculate the addition of two float numbers
#include<stdio.h>

float add(float, float);

int main(){

    float num1, num2, sum;

    printf("Enter first number: ");
    scanf("%f",&num1);

    printf("Enter second number: ");
    scanf("%f",&num2);

    sum =  add(num1,num2);
    printf("Addition is : %.2f", sum);

    return 0;

}


float add(float a, float b){

    float sum;
    sum = a + b;

    return sum;
}