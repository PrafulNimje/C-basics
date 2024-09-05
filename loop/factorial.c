// 3. Find the factorial of user entered number
#include<stdio.h>
int main()
{
    int i, num ,fact = 1;
    printf("Enter a number: ");
    scanf("%d", &num);

    for(i=1;i<=num;i++){
        fact = fact*i;
    }
    printf("Factorial of number is: %d",fact);
    return 0;
}