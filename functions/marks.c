// Accept the 5 subject marks in main and calculate average of the marks by using function

#include<stdio.h>

int avg(int,int,int,int,int);

int main(){
    int s1, s2, s3, s4, s5, average;

    printf("Enter marks of first subject: ");
    scanf("%d", &s1);

    printf("Enter marks of second subject: ");
    scanf("%d", &s2);

    printf("Enter marks of third subject: ");
    scanf("%d", &s3);

    printf("Enter marks of fourth subject: ");
    scanf("%d", &s4);

    printf("Enter marks of fifth subject: ");
    scanf("%d", &s5);

    average = avg(s1, s2, s3, s4, s5);

    printf("Average Marks is: %d", average);

    return 0;

}

int avg(int a, int b, int c, int d, int e){

    int avgr;
    avgr = (a+b+c+d+e)/5;

    return avgr;
}