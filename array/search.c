// An array of five integers is given. Accept an integer from the user and search for it in an array. 
//Write a function names Search which returns the position at which the element is found. -1 if the element is not found

#include<stdio.h>

int search(int [],int);

int main(){

    int a[5], i ,res, temp;

    printf("Enter 5 numbers: ");
    for ( i = 0; i < 5; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter a number you want to search in array: ");
    scanf("%d",&temp);
    res = search(a,temp);
    
    if(res !=-1 ){
        printf("Element found at %d index position\n",res);
    }
    else{
        printf("Element not found in array\n");
    }

    return 0;
}

int search(int a[5],int temp){

    int flag = 0, i;
    
    for(i=0;i<5;i++){
        if(temp == a[i]){
            flag = 1;
            return i;
        }
       
    }   
    if(flag ==0){
        return -1;
    }
}