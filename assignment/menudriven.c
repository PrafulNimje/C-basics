// 1 Write menu driven program to perform the following:
//1. Find Factorial
//2. Find square
//3. Exit

#include<stdio.h>
int main(){

    int num, choice;
    int i, fact = 1;
    int sq;
    char ans;
    do{
        printf("Enter number: ");
        scanf("%d",&num);

        printf("1.Factorial of number\n2.Square of number\n\n");
        printf("Enter your choice:");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            for(i=1; i<=num ; i++){
                fact = fact*i;
            }
            printf("Factorial of entered number is: %d",fact);
            break;
        case 2:
            sq = num * num;
            printf("Square of entered number is: %d", sq);
            break;
        
        default:
            printf("Invalid choice");
            break;
        }
        printf("\nDo you want to continue (Y/N): ");
        fflush(stdin);
        scanf("%c",&ans);
    }while (ans == 'Y' || ans == 'y');
    return 0;   
}

