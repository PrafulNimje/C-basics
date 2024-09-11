// Write a function to find the average the rainfall over a period of week.
// Pass on the entire array to function. Print the result in main

#include<stdio.h>

void avg(int []);

int main(){

    int rain[7], i;

    printf("Enter rainfall over period of week: ");
    for ( i = 0; i < 7; i++)
    {
        scanf("%d",&rain[i]);
    }
    avg(rain);
    return 0;
}

void avg(int rain[7]){

    int i, sum=0, aveg;
    for ( i = 0; i < 7; i++)
    {
        sum = sum+ rain[i];
    }
    aveg = sum/7;
    printf("Average rainfall over week is: %d",aveg);
}