// 4. Print the multiplication table of user entered number

#include<stdio.h>
int main(){
    int num,i;
    printf("Enter a number: ");
    scanf("%d",&num);

    for(i=1;i<=10;i++){
        printf("%d * %d = %d\n",num,i,num*i);
    }
    return 0;
}