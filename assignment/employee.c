//Accept name of an employee from the user and his date of birth. dd, mm and yyyy should be accepted as integers.
// Write two functions:
// Accept dd. mm and yVy in a function: 
// void Accept(int *, int *, int *);
// Display the date using a function.
// Call the functions from main)
// (Hint: Use passing by address. Use pointers as formal arguments.)


#include <stdio.h>

void Accept(int *d, int *m, int *y) {
    printf("Enter day (dd): ");
    scanf("%d", d);    
    printf("Enter month (mm): ");
    scanf("%d", m);    
    printf("Enter year (yy): ");
    scanf("%d", y);   
}

void Display(int d, int m, int y) {
    printf("Date of Birth: %d/%d/%04d\n", d, m, y);
}

int main() {
    char name[50];   
    int day, month, year;

    printf("Enter the employee's name: ");
    scanf("%s",&name);

    Accept(&day, &month, &year);

    printf("Employee Name: %s\n", name);

    Display(day, month, year);

    return 0;
}
