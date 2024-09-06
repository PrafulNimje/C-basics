// 7. Calculate the sum of first 10 natural numbers and result should be printed in main()

#include<stdio.h>

int natural();

int main(){

    int sum;

    sum = natural();
    printf("Sum of first 10 natural numbers is: %d",sum);

    return 0;
}

int natural(){

    int sum = 0, i;
    for(i = 1; i<=10;i++){

        sum = sum + i;
    }
    return sum;
}