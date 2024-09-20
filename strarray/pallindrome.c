// WAP to check whether the user entered string is pallindrome or not

#include<stdio.h>
#include<string.h>

int palindrome(char []);
int main(){

    char s[30];
    int res;
    printf("Enter a string: ");
    gets(s);

    res = palindrome(s);

    if(res!=0){
        printf("String is palindrome");
    }
    else{
        printf("String is not palindrome");
    }
    return 0;
}

int palindrome(char s[]){

    int i,len=0, flag=1;
    while (s[len]!=0)
    {
        len++;
    }
    
    for (i = 0; i < len / 2; i++) {
        if (s[i] != s[len - i - 1]) {
            flag = 0;
            break;
        }
    }
    return flag;
}