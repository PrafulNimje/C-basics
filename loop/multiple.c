// 6. Print multiples of 5 that are less than 100

#include<stdio.h>
int main(){
    int i;

    for(i=1;i<100;i++){
        if(i % 5==0){
            printf("%d\t",i);
        }
    }
    return 0;
}