// WAP to accept date , month, year from user in function called getDate(), and print that date in main()in dd/mm/yy format.

#include<stdio.h>

void getDate(int *, int *, int *);

int main(){

    int da,mon,yr;

    getDate(&da, &mon, &yr);

    printf("Entered date is : %2d/%2d/%2d",da,mon,yr % 100);

    return 0;

}
void getDate(int *da,int *mon,int *yr){

    printf("Enter day: ");
    scanf("%d", da);

    printf("Enter month: ");
    scanf("%d", mon);

    printf("Enter year: ");
    scanf("%d", yr);
}