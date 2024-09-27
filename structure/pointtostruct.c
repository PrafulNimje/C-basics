#include<stdio.h>

typedef struct book
{
    char title[20];
    int price;
    int pages;

}bk;

void acceptInfo(bk *);
void dispInfo(bk);

int main(){

    bk b = {0};

    acceptInfo(&b);
    dispInfo(b);

    return 0;
}

void acceptInfo(bk *b){
    printf("Enter title, price and pages: \n");
    scanf("%s", b->title);
    scanf("%d", &b->price);
    scanf("%d", &b->pages);

}

void dispInfo(bk b){
    printf("Book Title: ");
    puts(b.title);
    printf("Book Price: %d\n", b.price);
    printf("Book Pages: %d", b.pages);

}