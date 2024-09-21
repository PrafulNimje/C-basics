// Find the transpose of matrix and print the transpose using display()

#include<stdio.h>
#include<string.h>

void accept(int [][3]);
void displaytranspose(int [][3]);

int main(){

    int num[3][3];

    printf("Enter elements: \n");
    accept(num);

    printf("Entered elements are: \n");
    displaytranspose(num);

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

void displaytranspose(int num[3][3]){

    int res[3][3],r,c;
    for ( r = 0; r < 3; r++)
    {
        for ( c = 0; c < 3; c++)
        {
            res[r][c] = num[c][r];
            printf("%d\t",res[r][c]);
        }
        printf("\n");
    }
    
}