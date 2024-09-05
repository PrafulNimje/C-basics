// 5. WAP that calculates the average of a set of numbers inputby the user
// the user should be able to input as many numbers as desired and the program should continue until the user decides to stop

#include<stdio.h>
int main(){

    int count = 0;
    float num, sum = 0.0, avg;
    char choice;

    do{

        printf("Enter a number: ");
        scanf("%f", &num);

        sum = sum + num;
        count++;

        printf("Do you want to enter another number..(Y/N): ");
        fflush(stdin);
        scanf("%c",&choice);
    }while (choice == 'y' || choice == 'Y');
    
    if(count !=0){
        avg = sum/count;
        printf("The average of entered numbers is: %.2f",avg);
    }
    return 0;
    
}