// 12. WAP to print a user entered number is Amstrong number or not. 
// 153 = (1*1*1)+(5*5*5)+(3*3*3).

#include<stdio.h>
int main(){

    int num, sum=0, d;
    printf("Enter a number: ");
    scanf("%d", &num);

    while (num!=0)
    {
        d = num % 10;
        sum = sum + d*d*d;
        num = num/10;

    }
    printf("Sum is : %d", sum);
    return 0;

}