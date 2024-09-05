// WAF named printNumbers that print first 10 integers

#include<stdio.h>

void printNumbers();

int main(){

    printNumbers();

    return 0;

}

void printNumbers(){

    int num;
    for(num=1;num<=10;num++){
        printf("%d\n",num);
    }
}