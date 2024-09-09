#include<stdio.h>
void add(int * , int *);

int main(){

    int evensum=0 , oddsum=0 ;
    add(&evensum, &oddsum);

    printf("Even sum is : %d\n",evensum);
    printf("odd sum is : %d",oddsum);

    return 0;

}

void add(int *evensum, int *oddsum){
    int i;

    for(i=1;i<=10;i++){
        if(i%2==0){
            *evensum = *evensum + i;
        }
        else{
            *oddsum = *oddsum + i;
        }
    }
}