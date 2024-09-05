// Accept the student details :roll no, percentage and gender in main().Display this information by using function

#include<stdio.h>
void student(int,int,char);

int main(){

    int roll_no, percent;
    char gender;

    printf("Enter roll number: ");
    scanf("%d",&roll_no);
    printf("Enter percentage: ");
    scanf("%d",&percent);
    printf("Enter gender: ");
    fflush(stdin);
    scanf(" %c",&gender);
    student(roll_no,percent,gender);

    return 0;
}

void student (int roll_no, int percent, char gender){

    printf("Roll no: %d\n",roll_no);
    printf("Percentage: %d\n",percent);
    printf("Gender: %c",gender);
}