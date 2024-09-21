// ACCept another matrix of same dimension 
// Find the addition of two matrices and print the resultant matrix

#include<stdio.h>
#include<string.h>

void accept(int [][3]);
void display(int [][3],int [][3]);

int main(){

    int num1[3][3], num2[3][3];

    printf("Enter elements for num1 matrix: \n");
    accept(num1);

    printf("Enter elements for num2 matrix: \n");
    accept(num2);

    printf("Addition of two matrices is: \n");
    display(num1,num2);

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

void display(int num1[3][3],int num2[3][3]){

    int r,c, res[3][3];
    for ( r = 0; r < 3; r++)
    {
        for ( c = 0; c < 3; c++)
        {
            res[r][c] = num1[r][c] + num2[r][c];
            printf("%d\t",res[r][c]);
        }
        printf("\n");
    }
}