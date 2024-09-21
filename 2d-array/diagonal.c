//calculate sum of diagonal and non diagonal elements by using function
#include<stdio.h>
#include<string.h>

void accept(int [3][3]);
int diagonal(int [3][3]);
int nondiagonal(int [3][3]);

int main(){

    int mat[3][3];
    int sumdiagonal, sumnondiagonal;
    accept(mat);

    sumdiagonal = diagonal(mat);
    sumnondiagonal = nondiagonal(mat);

    printf("Sum of diagonal elements is: %d\n",sumdiagonal);
    printf("Sum of non-diagonal elements is: %d",sumnondiagonal);

    return 0;
}

void accept(int mat[3][3]){

    int i ,j;
    printf("Enter elements: ");
    for(i=0 ; i<3; i++){
        for ( j = 0; j < 3; j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
}

int diagonal(int mat[3][3]){

    int i,sum=0;
    for ( i = 0; i < 3; i++)
    {
        sum = sum + mat[i][i];
    }
    return sum;
}

int nondiagonal(int mat[3][3]){

    int i , j, sum = 0;
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            if (i!=j)
            {
                sum = sum + mat[i][j];
            }
            
        }
        
    }
    return sum;
}
