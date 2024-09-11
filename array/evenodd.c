// DEclare the array of 10 integers and calculate addition of even index elements as well as odd index elements

#include<stdio.h>
int main(){

    int a[10], evenar = 0, oddar = 0, i;

    printf("Enter 10 numbers: ");
    for(i=0;i<10;i++){

        scanf("%d",&a[i]);
    }

    for ( i = 0; i < 10; i++)
    {
        if(i%2==0){
            evenar = evenar + a[i];
        }else{
            oddar = oddar + a[i];
        }
    }
    printf("Addition of even index elements : %d\n", evenar);
    printf("Addition of odd index elements : %d", oddar);

    return 0;

}