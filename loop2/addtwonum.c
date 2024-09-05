// 4. WAP to to accept two numbers, adds them and display the result. 
// The program should execute until the user wants to add numbers.

#include<stdio.h>
int main(){
    int num1, num2;
    char ans;

    do{
        printf("Enter two numbers: ");
        scanf("%d %d", &num1, &num2);

        printf("Additiom of two numbers is: %d\n",num1 + num2);
        printf("Do you want to continue..(Y/N):");
        fflush(stdin);
        scanf("%c",&ans);
    }while (ans == "Y" || ans == "y");
    return 0;
}