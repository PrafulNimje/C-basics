// 9. Find out student is fail or pass aacording their aggregate marks.(greater than 40 - pass)

#include<stdio.h>
int main(){

    int marks;
    printf("Enter aggregate marks: ");
    scanf("%d",&marks);

    if(marks>=40){
        printf("Student is pass");
    }
    else {
        printf("Student is fail");
    }
}