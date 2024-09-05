// 1. Write a menu driven program for basic arithmetic calculation

#include<stdio.h>
int main(){

    int num1, num2, choice;
    char ans;
    do{
        printf("Enter two numbers: ");
        scanf("%d %d",&num1,&num2);

        printf("Basic Arithmetic Calculations:\n");
        printf("1.Addition\n2.Substraction\n3.Multiplication\n4.Division\n");
        printf("Enter your choice:");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Addition of two numbers is: %d",num1 + num2);
            break;
        case 2:
            printf("Substraction of two numbers is: %d",num1-num2);
            break;
        case 3:
            printf("Multiplication of two numbers is: %d",num1*num2);
            break;
        case 4:
            printf("Division of two numbers is: %d",num1/num2);
            break;
        default:
            break;
        }
        printf("\nDo you want to continue (Y/N): ");
        fflush(stdin);
        scanf("%c",&ans);
    }while (ans == 'Y' || ans == 'y');
    return 0;   
}