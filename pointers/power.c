// 10. WAP to calculate the power of number. Both power and base should be accepted from user
#include<stdio.h>

void power(int, int, int *);

int main(){

    int base, pow, res=1;
    printf("Enter base number: ");
    scanf("%d",&base);

    printf("Enter power: ");
    scanf("%d", &pow);

    power(base,pow,&res);

    printf("%d raised to power %d is: %d",base,pow,res);

    return 0;

}

void power(int base, int pow, int *res){

    int i;
    for(i=0; i<pow; i++){
        *res = *res * base;
    }
}