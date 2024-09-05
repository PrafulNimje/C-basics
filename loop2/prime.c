// 2. WAP to display whether a user entered number is prime or not

#include<stdio.h>
int main(){

    int num, div, flag = 0;
    printf("Enter a number: ");
    scanf("%d",&num);
    div = 2;
    while (div < num/2)
    {
        if(num % div == 0){
            flag = 1;
            printf("Number is not prime number..");
            break;
        }
        div++;
    }
    if(flag==0){
        printf("Number is Prime number");
    }
    return 0;
}