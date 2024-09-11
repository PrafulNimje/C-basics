//running total of 4 numbers
#include<stdio.h>

int add(int );

int main(){

    int num,i,sum;
    for(i=1;i<=4;i++){
        printf("Enter number: ");
        scanf("%d",&num);
        sum = add(num);
    
    }
    printf("Sum = %d",sum);
    return 0;

}

int add(int num)
{
    static int sum;
    sum = sum +num;
    return sum;
}