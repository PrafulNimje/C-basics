// 9. Print all odd numbers from 3 to 45

#include<stdio.h>
int main(){

    int i;
    for ( i = 3; i < 45; i++)
    {
        if(i%2!=0){
            printf("%d\t",i);
        }
    }
    return 0;
}