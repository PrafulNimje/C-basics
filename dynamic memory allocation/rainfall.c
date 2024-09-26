//write a code snipet to store rainfall value of 4 months number of years 'n' should be accepted from user accept the temperature for these n years 
//calculate the average rainfall monthwise and display the value

#include<stdio.h>
#include<stdlib.h>
void accept(float *,int);
void display(float *, int);

int main(){

    int years, months=4;
    float *rainfall[4];
    printf("Enter number of years: ");
    scanf("%d",&years);

    *rainfall = (float *)malloc(years * sizeof(float));
    for ( int  i = 0; i < 4; i++)
    {
        rainfall[i] = (float *)malloc(months * sizeof(float));
    }
    
    accept(rainfall,years);
    display(rainfall,years);

    for (int i = 0; i < years; i++) {
        free(rainfall[i]);
    }
    

    return 0;
}

void accept(float *rainfall,int years){

    int i,j;
    for ( i = 0; i < years; i++)
    {
        printf("Enter rainfall for year %d: ",i+1);
        for ( j = 0; j<4; j++)
        {
            printf("Month %d: ",j+1);
            scanf("%f",&*rainfall);
        }
    }
}

void display(float *rainfall,int years){
    int i,j;

    printf("Average rainfall year-wise: \n");
    for ( j = 0; j < years; j++)
    {   
        float sum=0;
        for ( i = 0; i < 4; i++)
        {
            sum = sum + *rainfall;
        }
        float avg= sum/4;
        printf("%d Year average rainfall: %.2f\n",j+1,avg);
    }
    
}