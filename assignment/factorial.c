// 1. Write menu driven program to perform the following:
// 1. Find Factorial
// 2. Find Square
// 3. Exit
// Menu should be displayed till the user wishes to see. Write the program using functions for calculating the factorial and square of a number. (Hint: Use pass by value)
// Also print how many times the function for calculating factorial was called before the main terminates.

#include <stdio.h>

int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact = fact *i;
    }
    return fact;
}

int square(int n) {
    return n * n;
}

int main() {
    int choice, num, factCalls = 0;
    
    while (1) {
        printf("\nMenu:\n");
        printf("1. Find Factorial\n");
        printf("2. Find Square\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                printf("Enter a number: ");
                scanf("%d", &num);
                printf("Factorial of %d is %d\n", num, factorial(num));
                factCalls++;
                break;
                
            case 2:
                printf("Enter a number: ");
                scanf("%d", &num);
                printf("Square of %d is %d\n", num, square(num));
                break;
                
            case 3:
                printf("Factorial function was called %d times.\n", factCalls);
                printf("Exiting program.\n");
                return 0;
                
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}
