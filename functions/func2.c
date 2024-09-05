// Write a function named accept number which will accept integer from the user and display it in function only

#include<stdio.h>

void acceptNumber();

int main(){

    acceptNumber();
    return 0;
}

void acceptNumber(){

    int num;

    printf("Enter number: ");
    scanf("%d",&num);

    printf("Number is : %d",num);
}