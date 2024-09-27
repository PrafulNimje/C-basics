//nested structure

#include<stdio.h>
#include<string.h>

enum category{magazines, novels, encyclopedia, cooking};

typedef struct publisher
{
    char pubName[20];
    char pubAddress[50];

}pb;

typedef struct book
{
    enum category cg;
     pb p;

}bk;

int main(){

    bk b= {0};

    printf("Enter Category: \n0. Magazine\n1.Novels\n2.Encyclopedia\n3.Cooking");
    scanf("%d",&b.cg);
    
    printf("\nEnter Details of book: \n");
    printf("Enter Publisher Name: ");
    scanf("%s",&b.p.pubName);

    printf("Enter Publisher address: ");
    scanf("%s",&b.p.pubAddress);
    p
    switch (b.cg)
    {
    case 0: printf("Magazine\n");
        break;
    case 1: printf("Novels\n");
        break;
    case 2: printf("Encyclopedia\n");
        break;
    case 3: printf("Cooking\n");
        break;

    default:printf("Invalid Choice\n");
        break;
    }

    printf("Publisher Name: %s\n", b.p.pubName);
    printf("Publisher Address: %s\n", b.p.pubAddress);

    return 0;
}
