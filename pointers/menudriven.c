#include<stdio.h>

void areaCircum(float ,float *, float *);
void areaPeri(float,float,float *, float *);

int main(){
    int choice;
    float radius, len, wid, area=0 , peri=0, circum=0;
    
    printf("1. Area of Circle\n2. Area of Rectangle\n");
    printf("Enter your choice: ");

    scanf("%d",&choice);

    switch (choice)
    {
    case 1:
        printf("Enter the radius of circle: ");
        scanf("%f",&radius);
        areaCircum(radius, &area, &circum);
        printf("Area of Circle: %.2f\n", area);
        printf("Circumference of circle: %.2f\n", circum);

        break;
    
    case 2:
        printf("Enter length and breadth of rectangle: ");
        scanf("%f %f", &len, &wid);
        areaPeri(len,wid, &area, &peri);
        printf("Area of Rectangle: %.2f\n",area);
        printf("Perimeter of Rectangle: %.2f\n",peri);

        break;

    default:
        printf("Invalid choice..");
        break;
    }

    return 0;
}

void areaCircum(float n1,float *area, float *circum){

    
    *area = 3.14 * n1 * n1;
    *circum = 2 * 3.14 * n1;

}

void areaPeri(float n2, float n3, float *area, float *peri){

    *area = n2 * n3;
    *peri = 2*(n2 + n3);
}