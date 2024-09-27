// Accept names of 5 students from user(use 2d array)
// a. Print the names
// b. Search a name in the list
// c. Print the name which has maximum length
// d. Sort the names in ascending order alphabetically
// e. Sort the names in ascending order of their length

#include<stdio.h>
#include<string.h>

void accept(char [5][20]);
void print(char [5][20]);
int search(char [5][20] , char [20]);
void maxlen(char [5][20]);
int strleng(char [5]);

int main(){
    int position;
    char ch[20];
    char st[5][20];

    accept(st);
    print(st);

    printf("Enter a name to search in list: ");
    scanf("%s",&ch);
    position = search(st,ch);

    if (position!=0)
    {
        printf("Name found at position: %d\n",position);
    }
    else{
        printf("Name not found.\n");
    }
        
    maxlen(st);
}

void accept(char st[5][20]){

    int i;
    printf("Enter names of student: ");
    for ( i = 0; i < 5; i++)
    {
       printf("Student %d: ",i+1);
       scanf("%s",&st[i]);
    }
}

void print(char st[5][20]){

    int i;
    for ( i = 0; i < 5; i++)
    {
        printf("Student %d name: %s\n",i+1,st[i]);
    }
    
}

int search(char st[5][20], char ch[20]){

    int i ,found = 0, index=0;
    
    
    for ( i = 0; i < 5; i++)
    {
        if (strcmp(st[i],ch)==0)
        {
           found=1;
           index=i;
           break;
        }   
    }

    if (found ==1)
    {
        return index;
    }
    else
    {
        return 0;
    }
    
}

void maxlen(char st[5][20]){
    int length, maxlen=0,maxindex=0;
    int i;

    for ( i = 0; i < 5; i++)
    {
        length = strleng(st[i]);
        if (length > maxlen)
        {
            maxlen = length;
            maxindex = i;
        }
        
    
    }
    printf("Name with maximum length is: %s",st[maxindex]);
}

int strleng(char st[5]){
    int len=0;
    while (st[len]!='\0')
        {
            len++;
        }
        return len;
}