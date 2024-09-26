#include<stdio.h>
#include<stdlib.h>

int main(){

    int i,num, *p;

    printf("Enter number of students: ");
    scanf("%d",&num);

    p = (int *)malloc(num * sizeof(int));

    for ( i = 0; i < num; i++)
    {
        printf("Enter the marks of student %d: ",i+1);
        scanf("%d",&p[i]);
    }
    for ( i = 0; i < num; i++)
    {
       printf("Student %d marks: %d\n",i+1,p[i]);
    }
    free(p);
}