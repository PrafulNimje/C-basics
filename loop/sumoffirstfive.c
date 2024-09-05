// 11. Find the sum of first five even numbers

#include<stdio.h>
int main(){
    int i , sum=0;
    for(i=1;i<=10;i++){
        if(i%2==0){
            sum = sum + i;
        }
    }
    printf("Sum of first five even numbers is: %d",sum);
    return 0;
}