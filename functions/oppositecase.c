// 7. WAP to convert user entered character to its opposite case

#include<stdio.h>

char convert(char);

int main(){

    char ch, conv;

    printf("Enter input: ");
    scanf(" %c",&ch);

    conv = convert(ch);

    printf("Opposite case of %c is %c", ch,conv);

    return 0;
}

char convert(char ch){
    char c;
    if (ch >= 'A' && ch <= 'Z') {
        c  = ch + 32;
        return c;
    } else if (ch >= 'a' && ch <= 'z') {
        c = ch - 32;
        return c;
    } 
}