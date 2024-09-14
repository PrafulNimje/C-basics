//3. Find the sum of all even numbers from 1 to 20. Modify the program to accept the lower and upper limit from the user.
#include <stdio.h>

int main() {
    int i, j, lower, upper, sume = 0, sum=0;

    for(i = 1; i <= 20; i++) {
        if(i % 2 == 0) {
            sume = sume + i;  
        }
    }
    
    printf("The sum of even numbers between 1 and 20 is: %d\n", sume);

    printf("Enter the lower limit: ");
    scanf("%d", &lower);
    printf("Enter the upper limit: ");
    scanf("%d", &upper);

    for( j = lower; j <= upper; j++) {
        if(j % 2 == 0) {
            sum = sum + j;  
        }
    }

    printf("The sum of even numbers between %d and %d is: %d\n", lower, upper, sum);

    return 0;
}
