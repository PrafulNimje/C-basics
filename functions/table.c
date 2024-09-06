#include<stdio.h>
void charline(int, char);

int main(){

    int len;
    char ch;

    printf("Enter the length of line: ");
    scanf("%d",&len);
    printf("Enter character: ");
    scanf(" %c",&ch);
    
    charline(len,ch);
    printf("\nData type \t size in bytes\n");

    charline(len,ch);
    printf("\nInteger \t 4\n");

    charline(len,ch);
    printf("\nCharacter \t 1\n");

    charline(len,ch);
    printf("\nFloat \t\t 4\n");
    charline(len,ch);

    return 0;


}


void charline(int len, char ch){
    int i;
    for(i =1; i<=len;i++){
        printf(" %c",ch);
    }
}