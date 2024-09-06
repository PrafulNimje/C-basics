// 2. Factorial of user entered number

#include<stdio.h>
int factorial(int);

int main(){

    int num, fact;
    printf("Enter number: ");

    scanf("%d",&num);

    fact = factorial(num);

    printf("Factorial of number is:  %d",fact);

    return 0;

}

int factorial(int n){

    int fact =1 ,i;

    for ( i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
    
}