// Nest the macro SQUARE in another macro CUBE to find the cube of a number.

#include<stdio.h>

#define SQUARE(x) ((x)*(x))
#define CUBE(x) (SQUARE(x)*(x))

int main(){

    int c;
    printf("Enter a number: ");
    scanf("%d",&c);

    printf("Square of entered number is: %d",CUBE(c));
}