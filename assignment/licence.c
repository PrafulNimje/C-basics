// 2. Accept the age from the user and display appropriate message for issuing of licence:
// - less than 18 years - no licence
// - above 18 years - issue licence

#include<stdio.h>
int main(){

    int age;
    printf("Enter age:");
    scanf("%d",&age);

    if (age>=18)
    {
        printf("Issue Licence");
    }
    else{
        printf("No licence");
    }
    return 0;
}