// WAP that calculates the average marks for each 4 students who hold the 5 subjects by using functions
#include<stdio.h>
#include<string.h>

void inputmarks(int [4][5]);
void displayavg(int [][5]);


int main(){

    int stu[4][5];
    inputmarks(stu);
    displayavg(stu);
    return 0;
}

void inputmarks(int st[4][5]){

    int i,j;
    for ( i = 0; i < 4; i++)
    {
        printf("Enter marks for student %d:\n",i+1);
        for(j=0 ; j<5; j++){
            printf("Enter marks for subject %d: ",j+1);
            scanf("%d",&st[i][j]);
        }
    }
}

void displayavg(int st[4][5]){

    int i,j,sum=0; 
    float avg;
    for ( i = 0; i < 4; i++)
    {
        for ( j = 0; j < 5; j++)
        {
            sum = sum + st[j];
        }
        avg = (float)sum/5;
        printf("Average marks for student %d : %f\n",i+1,avg);
    }
}