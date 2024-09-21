// 1. WAP to accept and display 3*3 matrix by using functions

#include<stdio.h>
#include<string.h>

void accept(int [][3]);
void display(int [][3]);

int main(){

    int num[3][3];

    printf("Enter elements: \n");
    accept(num);

    printf("Entered elements are: \n");
    display(num);

    return 0;

}

void accept(int num[3][3]){

    int r,c;
    for ( r = 0; r < 3; r++)
    {
        for ( c = 0; c < 3; c++)
        {
            scanf("%d",&num[r][c]);
        }
    }
    
}

void display(int num[3][3]){

    int r,c;
    for ( r = 0; r < 3; r++)
    {
        for ( c = 0; c < 3; c++)
        {
            printf("%d\t",num[r][c]);
        }
        printf("\n");
    }
    
}