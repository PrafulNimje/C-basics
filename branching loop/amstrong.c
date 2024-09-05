//1. Display all amstrong number in the range 100 to 1000

#include<stdio.h>
int main(){
    int i , temp=0, res , rem;
    printf("Armstrong numbers between 100 and 1000 are: \n");


    for(i =100; i <= 1000; i++)
    {
        res= 0;
        temp = i;

        while(temp!=0){
            rem = temp%10;
            res = res + (rem * rem* rem);
            temp = temp/10;
        }
        if (res==i){
            printf("%d\n",i);
        }
    }
    return 0;
}