//WAP to accept numbers from user. Print the number if it is a multiple of 5.if not then ask for another number. Stop when the user enter zero


#include <stdio.h>

int main() {
    int number;

    
    while (1) {
        printf("Enter a number (enter 0 to stop): ");
        scanf("%d", &number);

        if (number == 0) {
            printf("Program terminated.\n");
            break;
        }

        if (number % 5 == 0) {
            printf("%d is a multiple of 5\n", number);
        } else {
            printf("%d is not a multiple of 5, try again.\n", number);
        }
    }

    return 0;
}