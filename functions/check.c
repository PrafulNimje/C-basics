// Accept a no from user and pass it to a function called check()
// This function calculates the status of the no as either positive or negative.
// As long as the no is negative the user should be asked to re - enter the no otherwise the no should be passed as a parameter to prime().
// This function check the whether no is prime or not .
// This message should be printed in main()

#include<stdio.h>

int check(int);
int prime(int);

int main(){
    int num , res;

    printf("Enter number: ");
    scanf("%d",&num);

    res = check(num);

    if(res == 0){
        printf("Number is prime number..");
    }
    else{
        printf("Number is not a prime number..");
    }
    return 0;

}

int check(int num){
    int ans;
    while(num<0){
        printf("Number is negative.. Please re-enter number..\n");
        scanf("%d",&num);

    }
    ans = prime(num);
    return ans;
}

int prime(int num){

    int div = 2 , flag = 0;
    while(div < num/2){
        if (num % div ==0){
            flag = 1;
            //printf("Number is not prime..");
            return 1;
            break;
        }
        div++;
    }
    if (flag == 0)
    {
      //printf("Number is a prime number.");
      return 0;
    }
}