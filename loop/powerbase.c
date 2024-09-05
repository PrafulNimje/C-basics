// 10. WAP to calculate the power of number. Both power and base should be accepted from user

#include<stdio.h>
int main(){
    int base, power, res=1, i;
    printf("Enter the base: ");
    scanf("%d", &base);
    
    printf("Enter the power: ");
    scanf("%d", &power);

    for(i = 1; i<=power; i++){
        res = res*base;
    }
    printf("%d raised to power %d is: %d", base, power, res);
    return 0;

}