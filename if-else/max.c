// 2. Find out maximum of two numbers
#include<stdio.h>
int main(){

    int num1, num2;
    printf("Enter first number: ");
    scanf("%d",&num1);
    printf("Enter second number: ");
    scanf("%d",&num2);

    if(num1>num2){
        printf("First number is bigger..");
    }
    else{
        printf("Second number is bigger..");
    }
    return 0;
}