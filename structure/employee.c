// Define a structure "Employee" having member - employee_id, name, salary
// Accept the data for employee and display the record

#include<stdio.h>

struct employee
{
    int emp_id;
    char name[20];
    float sal;
};

int main(){

    struct employee e[3];

    for (int i = 0; i < 3; i++)
    {
        printf("\nEnter details of employee %d :\n",i+1);
        
        printf("Enter Employee ID: ");
        scanf("%d",&e[i].emp_id);

        printf("Enter Name of Employee: ");
        scanf("%s",e[i].name);
        
        printf("Enter Salary of Employee: ");
        scanf("%f",&e[i].sal);
    }
    printf("\nEmployee Details:\n");

    for (int i = 0; i < 3; i++)
    {
        printf("Employee %d Details:\n",i+1);
        printf("Employee ID: %d\n",e[i].emp_id);
        printf("Employee name: %s\n",e[i].name);
        printf("Employee salary: %.2f\n",e[i].sal);
        printf("\n");
    }

    return 0;

}