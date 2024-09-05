// 11. Accept numerator & denominator 
// - if denominator is zero - display message accrdingly
// - otherwise perform division and display quotient and remainder of that division.

#include<stdio.h>
int main(){

    int num,denom;
    int quo,remain;

    printf("Enter Numerator: ");
    scanf("%d",&num);
    printf("Enter Denominator: ");
    scanf("%d",&denom);

    if(denom==0){
        printf("Denominator is Zero");
    }
    else{
    quo = num/denom;
    remain = num%denom;
   
    printf("Quotient is: %d",quo);
    printf("Remainder is: %d",remain);
    }
    return 0;
}