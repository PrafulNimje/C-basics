// WAP to calculate and display the average marks of 5 subjects obtained by a student

#include<stdio.h>
int main(){

    int i, marks[5], sum=0, avg;
    printf("Enter marks of 5 subject: ");
    for ( i = 0; i < 5; i++)
    {
        scanf("%d",&marks[i]);
        sum= sum+marks[i];
    }
    avg = sum/5;
    printf("Average marks of 5 subjects is: %d",avg);
    
    return 0;
}