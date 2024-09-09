// 6. WAP to check whether a character is an alphabet , digit or special character

#include<stdio.h>

int checkchar(char);

int main(){

    char ch;
    int check;


    printf("Enter input: ");
    scanf(" %c",&ch);

    check = checkchar(ch);

    if(check == 0)
    {
        printf("Entered input is alphabet.");
    }
    else if(check == 1)
    {
        printf("Entered input is digit");
    }else
    {

        printf("Entered input is special character.");
    }
    return 0;
}
int checkchar(char ch)
{
if((ch >= 'A' && ch<= 'Z') || (ch >= 'a' && ch <= 'z'))
    
        return 0;
    else if (ch >= 48   && ch <= 57)
    
       return 1;
    
    else
    
        return 2;
    
}