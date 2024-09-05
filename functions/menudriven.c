// Write a menu driven program which allows the user to select either circle or rectangle
// a. write a single function areaCircum() that calculates the area and circum of a circle
// b. write a single function areaPeri that calculates te area and perimeter of a rectangle

#include<stdio.h>

void areaCircum(float);
void areaPeri(int,int);

int main(){
    int choice;
    float n1;
    int n2,n3;
    printf("1. Area of Circle\n2.Area of Rectangle\n");
    printf("Enter your choice: ");

    scanf("%d",&choice);

    switch (choice)
    {
    case 1:
        printf("Enter the radius of circle: ");
        scanf("%f",&n1);
        areaCircum(n1);
        break;
    
    case 2:
        printf("Enter length and breadth of rectangle: ");
        scanf("%d %d", &n2, &n3);
        areaPeri(n2,n3);
        break;

    default:
        printf("Invalid choice..");
        break;
    }

    return 0;
}

void areaCircum(float n1){

    float areac, circ;
    areac = 3.14 * n1 * n1;
    printf("Area of Circle: %.2f\n", areac);

    circ = 2 * 3.14 * n1;
    printf("Circumference of circle: %.2f\n", circ);

}

void areaPeri(int n2,int n3){

    int arear, perir;
    arear = n2 * n3;
    printf("Area of Rectangle: %d\n",arear);

    perir = 2*(n2 + n3);
    printf("Perimeter of Rectangle: %d\n",perir);
}