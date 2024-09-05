// 10. Accept a 4 digit number and perform the addition of digits

int main(){

    int num, sum, d1, d2, d3;

    printf("Enter 4 digit number:");
    scanf("%4d", &num);

    d1 = num % 10;
    num = num / 10;

    d2 = num %10;
    num = num /10;

    d3 = num % 10;
    num = num /10;

    sum = d1 + d2 + d3 + num;
    printf("Sum of digits :%d", sum);

    return 0;

}