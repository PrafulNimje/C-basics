//6. Raj is given a number and a digit. He has to find the power of that number to that digit.
//Help him by writing a program.If either of the number is negative, print "Invalid input".

#include<stdio.h>
int main(){
    int base, power, res=1, i;
    printf("Enter the base: ");
    scanf("%d", &base);
    
    printf("Enter the power: ");
    scanf("%d", &power);

    if (base<0 || power<0)
    {
        printf("Invalid input");
    }
    else{
        for(i = 1; i<=power; i++){
            res = res*base;
        }
        printf("%d raised to power %d is: %d", base, power, res);
    }
    return 0;
}