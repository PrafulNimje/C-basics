//5. A teacher provides his student with a number and a key digit. 
//He wants student to find out many times the key digit occurs in the number. Help the student by writing a program.

#include <stdio.h>

int main() {
    int num, key, count = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Enter the key digit: ");
    scanf("%d", &key);

    while (num != 0) {
        digit = num % 10;  
        if (digit == key) {
            count++;  
        }
        num = num/10;  
    }

    printf("The digit %d occurs %d times.\n", key, count);
    return 0;
}
