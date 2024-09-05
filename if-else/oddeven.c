// 4. Find whether number given is odd or even and display message "odd" or "even"

#include<stdio.h>
int main(){

    int num;
    printf("Enter a number: ");
    scanf("%d",&num);

    if(num%2==0){
        printf("Number is even");
    }
    else{
        printf("Number is Odd");
    }
    return 0;
}