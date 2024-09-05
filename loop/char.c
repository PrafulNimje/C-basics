// 1. WAP to display ASCII characters in the range (0-255)
// The display should pause after displaying every 10 characters
#include<stdio.h>
#include<conio.h>
int main()
{
    int i;

    printf("ASCII Characters from 0 to 255: ");
    for (i = 0; i <= 255; i++) {
        printf("ASCII %3d: %c\n", i, i);

     if ((i + 1) % 10 == 0) {
            printf("Press any key to continue..\n");
            getch();  
        }
    }
    return 0;
}