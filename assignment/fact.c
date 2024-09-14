// 12.trainer has taught how to calculate the factorial of a number. 
// But he wants to check the understanding of a student. He provides a number to the student. 
// The student should tell that this number is a factorial of which number. e.g. If a number given is 120, then the student's answer should be 5.
// Please note that the number should be greater than zero. If the input is less than or equal to zero, the output should be "Input is not valid."
// If the input is not exactly a factorial of any number, say 125 then the output should be "Input number is not the exact factorial of any number"

#include <stdio.h>

int main() {
    int num, fact = 1, i = 1;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num <= 0) {
        printf("Input is not valid.\n");
        return 0;
    }

    while (fact < num) {
        i++;
        fact = fact * i;
    }

    if (fact == num) {
        printf("The number %d is the factorial of %d.\n", num, i);
    } else {
        printf("Input number is not the exact factorial of any number.\n");
    }

    return 0;
}
