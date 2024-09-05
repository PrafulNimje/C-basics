//3 . WAP to find pythagorean triplet from 0 to 100
#include<stdio.h>
int main() {
    int a, b, c;

    printf("Pythagorean triplets from 0 to 100 are:\n");
    for (a = 1; a <= 100; a++) {
        for (b = a; b <= 100; b++) {  
            for (c = b; c <= 100; c++) {
              
                if (a * a + b * b == c * c) {
                    printf("%d, %d, %d\n", a, b, c);  
                }
            }
        }
    }

    return 0;
}