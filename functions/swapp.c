// Swap the values of two variables
#include<stdio.h>
void swap(int, int);
int main(){

    int n1 , n2;

    printf("Enter first number: ");
    scanf("%d", &n1);
    printf("Enter second number: ");
    scanf("%d", &n2);

    swap(n1,n2);

    return 0;
}

void swap(int n1, int n2){

    int temp;

    temp = n1;
    n1=n2;
    n2=temp;

    printf("After swapping: \n");
    printf("Num1: %d\n",n1);
    printf("Num2: %d",n2);

}