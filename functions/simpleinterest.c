// Simple interest by using function

#include<stdio.h>

void si(int, int, int);

int main(){

    int p , r ,t ;

    printf("Enter Principle amount: ");
    scanf("%d",&p);
    printf("Enter Rate of Interest: ");
    scanf("%d",&r);
    printf("Enter time: ");
    scanf("%d",&t);

    si(p,r,t);
    return 0;

}

void si(int p,int r, int t){

    int simple ;

    simple = (p*r*t)/100;

    printf("Simple Interest is: %d",simple);
}