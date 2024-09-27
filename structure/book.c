// Define a structure 'book' having members - bookid, title, price
// Accept the data for a 5 book and display the record

#include<stdio.h>

struct book
{
    int bookid;
    char title[20];
    int price;
};

int main(){
    struct book bk[5];

    for (int i = 0; i < 5; i++)
    {
        printf("\nEnter details of book %d :\n",i+1);
        printf("Enter book ID: ");
        scanf("%d",&bk[i].bookid);

        printf("Enter Title of book: ");
        scanf("%s",bk[i].title);
        
        printf("Enter price of book: ");
        scanf("%d",&bk[i].price);

    }
    printf("\nBook Details:\n");

    for (int i = 0; i < 5; i++)
    {
        printf("Book %d Details:\n",i+1);
        printf("Book ID: %d\n",bk[i].bookid);
        printf("Book Title: %s\n",bk[i].title);
        printf("Book Price: %d\n",bk[i].price);
        printf("\n");
    }
    
    return 0;
}