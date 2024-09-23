//Store names of 5 cricket players in array. Accept name of a player from the user to search in the array. 
//If the name is found, "print found", else print "not found".


#include<stdio.h>
#include<string.h>

int main() {
    char players[5][50];   
    char searchName[50];   
    int found = 0;         

    printf("Enter the names of 5 cricket players :\n");
    for (int i = 0; i < 5; i++) {
        printf("Enter player %d's name: ", i + 1);
        scanf("%s", players[i]);  
    }

    printf("\nEnter the name of the player to search: ");
    scanf("%s", searchName);  

    for (int i = 0; i < 5; i++) {
        if (strcmp(players[i], searchName)==0) {
            found = 1;  
            break;
        }
    }

    if (found==1) {
        printf("Found\n");
    } else {
        printf("Not Found\n");
    }

    return 0;
}