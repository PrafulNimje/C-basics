// Print the multiplication table of user entered number

#include<stdio.h>
void multiplication(int);
int main(){

    int n1;
    printf("Enter number: ");
    scanf("%d",&n1);

    multiplication(n1);

    return 0;
}

void multiplication(int n1){

    int i;
    for(i=1;i<=10;i++){
        printf("%d * %d = %d\n",n1,i,n1*i);
    }
}