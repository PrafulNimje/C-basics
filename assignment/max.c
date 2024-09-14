//4. Find the maximum of two numbers and display it. [Use if-else. Also write the code using conditional operator]

#include<stdio.h>
int main(){

    int num1, num2;
    printf("Enter first number: ");
    scanf("%d",&num1);
    printf("Enter second number: ");
    scanf("%d",&num2);

    if(num1>num2){
        printf("First number is bigger..");
    }
    else{
        printf("Second number is bigger..");
    }
    return 0;
}

//code using conditional operator
// #include <stdio.h>

// int main() {
//     int num1, num2, max;

//     printf("Enter two numbers: ");
//     scanf("%d %d", &num1, &num2);

//     max = (num1 > num2) ? num1 : num2;

//     printf("The maximum of %d and %d is: %d\n", num1, num2, max);

//     return 0;
// }
