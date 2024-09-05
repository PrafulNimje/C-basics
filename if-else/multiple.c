// 6. Check number is multiple of 5

#include<stdio.h>
int main(){

    int num;
    printf("Enter a number: ");
    scanf("%d",&num);

    if(num%5==0){
        printf("Number is multiple of 5");
    }
    else{
        printf("Number is not multiple of 5");
    }
    return 0;
}