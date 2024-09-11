// Accept 5 numbers in array. print them in reverse order

#include<stdio.h>
int main(){

    int num[5],i;

    printf("Enter 5 numbers: ");
    for(i=0;i<5;i++){

        scanf("%d",&num[i]);
    }

    printf("Reversed array is: \n");

    for(i=4;i>=0;i--){
        printf("%d\t",num[i]);
    }
    return 0;
    
}