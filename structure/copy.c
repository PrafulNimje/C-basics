// WAP to copy one structure to another
// a. On element by element basis
// b. copying an entire structure to another 

#include<stdio.h>
#include<string.h>

struct student
{
    char st_name[20];
    int st_id;
    int st_marks;
};


int main(){

    struct student s1= {"Tushar", 101, 50};
    struct student s2,s3;

    s2 = s1;

    printf("After copying entire structure to another structure: \n");
    printf("Name: %s\n",s2.st_name);
    printf("Student ID: %d\n",s2.st_id);
    printf("Student Marks: %d\n",s2.st_marks);

    strcpy(s3.st_name,s1.st_name);
    s3.st_id = s1.st_id;
    s3.st_marks = s1.st_marks;
    printf("After copying element by element: \n");
    
    printf("Name: %s\n",s3.st_name);
    printf("Student ID: %d\n",s3.st_id);
    printf("Student Marks: %d",s3.st_marks);

    return 0;
}
