// 10. Accept cost price & selling price of an item from the user. Find whether there is profit or loss. Display the message accordingly

#include<stdio.h>
int main(){

    int cp, sp;
    printf("Enter Cost price of Item: ");
    scanf("%d",&cp);
    printf("Enter Selling price of Item: ");
    scanf("%d",&sp);
    
    if(cp>sp){
        printf("Its loss");
    }
    else{
        printf("Its Profit");
    }
    return 0;
}