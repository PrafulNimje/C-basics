// 5. Write a function power, which calculates the power of user enteres base and index passed to it from main().
// Display the power in main()

#include<stdio.h>

int power(int,int);

int main(){

    int p,b,res;

    printf("Enter base number: ");
    scanf("%d",&b);
    printf("Enter power: ");
    scanf("%d",&p);

    res = power(b,p);

    printf("%d raised to power %d is: %d", b,p,res);

    return 0;

}

int power(int p,int q){

    int ans=1, i;
    for(i=1; i<= q; i++){
        ans = ans * p;
    }
    return ans;
}