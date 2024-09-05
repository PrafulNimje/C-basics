// 2. Display first 25 prime numbers(2,3,5....97)
#include<stdio.h>
int main(){
    int cnt  = 0, num = 2, i , flag = 0;
    printf("First 25 Prime number are: \n");

    while (cnt<25)
    {
        flag = 1;
        for(i = 2 ; i<=num/2; i++){
            if(num % i==0){
                flag=0;
                break;
            }

        }
        if(flag ==1){
            printf("%d\n",num);
            cnt++;
        }
        num++;
    }
    return 0;
}