// WAP to display  the addition of all odd num and all even num from 1 to 20

#include<stdio.h>
int main(){
    int i , even_sum=0,odd_sum=0;

    for(i=1;i <=20;i++){
        if(i%2==0){
            even_sum = even_sum + i;
        }
        else{
            odd_sum = odd_sum  + i;
        }
    }
    printf("Additon of all even number upto 20 is :%d\n",even_sum);
    printf("Additon of all odd number upto 20 is :%d",odd_sum);

    return 0;
}