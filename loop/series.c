// 5. Print the series 1 3 5 7 9

#include<stdio.h>
int main(){
    int i;

    for(i=1;i<=10;i++){
        if(i%2!=0)
        printf("%d\t",i);
    }
    return 0;
}