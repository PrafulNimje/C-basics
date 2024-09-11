#include<stdio.h>

#define SQUARE(a) (a)*(a)

int main(){

    int x;
    printf("Enter a number: ");
    scanf("%d",&x);

    printf("Square of entered number is: %d",SQUARE(x));
    return 0;

}