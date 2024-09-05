// 9. Accept the 5 subject marks from user and find the average

int main(){

    int sub1, sub2, sub3, sub4, sub5;
    float avg;

    printf("Enter marks of subject 1:\n");
    scanf("%d",&sub1);

    printf("Enter marks of subject 2:\n");
    scanf("%d",&sub2);

    printf("Enter marks of subject 3:\n");
    scanf("%d",&sub3);

    printf("Enter marks of subject 4:\n");
    scanf("%d",&sub4);

    printf("Enter marks of subject 5:\n");
    scanf("%d",&sub5);

    avg = (float)((sub1 + sub2 + sub3 + sub4 + sub5)/5);

    printf("Average of 5 subject marks is: %f",avg);

    return 0;
}