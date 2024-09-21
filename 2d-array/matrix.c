// Harry potter movies

#include<stdio.h>
#include<string.h>

void GetMovies(char [][30]);
void DisplayMovies(char [][30]);

int main(){

    char movies[8][30];
    printf("Enter Movies names: ");
    GetMovies(movies);
    printf("Entered movies names are: \n");
    DisplayMovies(movies);

    return 0;
}

void GetMovies(char movies[8][30]){

    int r; 
    for(r=0;r<8;r++){
       gets(movies[r]);
        
    }
}
void DisplayMovies(char movies[8][30]){

    int i;
    for (i = 0; i < 8; i++)
    {
        puts(movies[i]);
    }
    
}