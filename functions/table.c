#include<stdio.h>
int charline(int, char);

int main(){

    int len,cnt;
    char ch;

    printf("Enter the length of line: ");
    scanf("%d",&len);
    printf("Enter character: ");
    scanf(" %c",&ch);
    
    cnt= charline(len,ch);
    printf("\nData type \t size in bytes\n");

    cnt=charline(len,ch);
    printf("\nInteger \t %d\n",sizeof(int));

    cnt=charline(len,ch);
    printf("\nCharacter \t %d\n",sizeof(char));

    cnt=charline(len,ch);
    printf("\nFloat \t\t %d\n",sizeof(float));
    cnt=charline(len,ch);
   
    printf("\nCharline Function is called %d times\n",cnt);

    return 0;
}


int charline(int len, char ch){
    int i;
    static int count;
    for(i =1; i<=len;i++){
        printf(" %c",ch);
    }
    count++;
    return count;
    
}