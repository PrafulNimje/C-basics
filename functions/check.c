// Accept a no from user and pass it to a function called check()
// This function calculates the status of the no as either positive or negative.
// As long as the no is negative the user should be asked to re - enter the no otherwise the no should be passed as a parameter to prime().
// This function check the whether no is prime or not .
// This message should be printed in main()

#include<stdio.h>

void check(int);
void prime(int);

int main(){
    int num;

    printf("Enter number: ");
    scanf("%d",&num);

    check(num);

    return 0;

}

void check(int num){

    while(num < 0){
        printf("Number is negative.. Please re-enter number..");
        scanf("%d",num);

    }
    prime(num);
}

void prime(int num){

    
}