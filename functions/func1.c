// Addition 

#include<stdio.h>
void add();
int main(){

    add();
    return 0;
}

void add(){

    int n1, n2, sum;
    printf("Enter first number: ");
    scanf("%d",&n1);
    printf("Enter second number: ");
    scanf("%d",&n2);
    sum = n1+ n2;
    printf("Addition : %d",sum);
}