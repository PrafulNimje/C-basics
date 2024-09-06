// 3. Calculate the simple interest by using function

#include<stdio.h>

int si(int , int, int);

int main(){

    int p, r, t , sim;

    printf("Enter Principle Amount: ");
    scanf("%d",&p);

    printf("Enter Rate of Interest: ");
    scanf("%d",&r);

    printf("Enter Time duration: ");
    scanf("%d",&t);

    sim = si(p,r,t);
    printf("Simple Interest is: %d", sim);
    
    return 0;

}


int si(int a,int b, int c){

    int simp;
    simp = (a*b*c)/100;
    return simp;
}