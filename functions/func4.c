// addition with parameter passing

#include<stdio.h>

void add(int, int);

int main(){

    int n1,n2;
    printf("Enter first number: ");
    scanf("%d",&n1);
    printf("Enter second number: ");
    scanf("%d",&n2);

    add(n1,n2);

    return 0;

}

void add(int n1,int n2){

    int sum=0;

    sum = n1+n2;
    printf("Addition: %d",sum);
}