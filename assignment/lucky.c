// Gennie wants to choose a lucky 4-digit number for her car. Her lucky nums are 3 and 5. 
// Help her find the num whose sum of the digits is divisible by 3 or 5. Write a program to do this.
// [if the input num is 12, it is invalid (because it is 2 digit). If the number is negative, it is invalid.]

#include <stdio.h>

int main() {
    int num, sum = 0, digit, temp;

    printf("Enter a 4-digit number: ");
    scanf("%d", &num);

    if (num < 1000 || num > 9999) {
        printf("Invalid input. Please enter a 4-digit number.\n");
    } 
    else {
        temp = num;  

        while (temp != 0) {
            digit = temp % 10;  
            sum = sum + digit;       
            temp = temp / 10;         
        }

        if (sum % 3 == 0 || sum % 5 == 0) {
            printf("The num %d is a lucky number!\n", num);
        } 
        else {
            printf("The num %d is not a lucky number. The sum of its digits is not divisible by 3 or 5.\n", num);
        }
    }

    return 0;
}
