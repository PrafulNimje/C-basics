// Write a function "dispDetails" that displays the information of a book

#include<stdio.h>
#include<string.h>

void dispDetails(char [], int,int,int);

struct library
{
    char bk_name[30];
    int no_of_books;
    int no_of_sections;
    int st_id;
};

void dispDetails(char bk_name[30], int no_books, int no_sections, int st_id){

    printf("Book Name: %s\n",bk_name);
    printf("Number of books: %d\n", no_books);
    printf("Number of Sections: %d\n",no_sections);
    printf("Student ID: %d",st_id);

}


int main(){

    struct library l1 = {"Harry Potter",4 ,5, 101};

    dispDetails(l1.bk_name,l1.no_of_books,l1.no_of_sections,l1.st_id);

    return 0;
}