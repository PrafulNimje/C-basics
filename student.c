// 5. WAP to print rollno , marks , gender of a student
#include<stdio.h>
int main(){

    int rollno, marks;
    char gender;

    printf(" Enter Roll number , Marks and Gender:");
    scanf("%d %d %c", &rollno, &marks, &gender);


    printf("Entered details of Student is: ");
    printf("Roll number: %d\n", rollno);
    printf("Marks: %d\n", marks);
    printf("Gender: %c", gender);

    return 0;
}
