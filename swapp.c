// 8. Swap the values of two variables by using third variable

int main(){
    
    int num1 , num2, temp;
    printf("Enter first value:");
    scanf("%d",&num1);

    printf("Enter second value:");
    scanf("%d",&num2);

    temp = num1;
    num1 = num2;
    num2 = temp;

    printf("After swapping values of two variable is :\n");
    printf("Num1 :%d\n",num1);
    printf("Num2 :%d",num2);

    return 0;

}