//WAP to find the sum of factorial number in an array. consider the number for finding factorial only if it is positive and a single digit .
//if not print the message "There is no positive and a single digit number in the array"



#include <stdio.h>

int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int arr[10], sum = 0, flag = 0;

    printf("Enter 10 numbers:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < 10; i++) {
        if (arr[i] > 0 && arr[i] < 10) {  
            sum =sum +  factorial(arr[i]);
            flag = 1;  
        }
    }

    if (flag==1) {
        printf("The sum of the factorials of positive single-digit numbers is: %d\n", sum);
    } else {
        printf("There is no positive and a single-digit number in the array.\n");
    }

    return 0;
}
