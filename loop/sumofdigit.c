// 14. WAP to display sum of digit of a number

#include<stdio.h>
int main(){
    int num, sum = 0, d;

    printf("Enter a number: ");
    scanf("%d",&num);

    while (num !=0)
    {
       d = num % 10;
       sum = sum + d;
       num = num/10;

    }
    printf("Sum of digits of number is :%d", sum);
    return 0;

}