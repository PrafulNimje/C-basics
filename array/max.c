// Accept the 5 numbers in an array. Find the maximum number in an array

#include<stdio.h>
int main(){

    int i, num[5], temp;

    printf("Enter 5 numbers: ");
    for ( i = 0; i < 5; i++)
    {
        scanf("%d",&num[i]);

    }
    temp = num[0];
    
    for ( i = 1; i < 5; i++)
    {
        if (temp<num[i])
        {
            temp = num[i];
            
        }
    }
    printf("Maximum value: %d",temp);
    return 0;
    
}