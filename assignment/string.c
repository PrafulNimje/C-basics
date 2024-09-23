// 8. Declare a string and accept its value. Accept a character from the user. 
// Search the character in the string. If found, print "Found" and replace the character with k. If not found, print the message.

#include <stdio.h>
#include <string.h>

int main() {
    char str[10];
    char ch;
    int i, found = 0;
    int length=0;

    printf("Enter a string: ");
    scanf("%s", str);

    printf("Enter a character to search for: ");
    scanf(" %c", &ch);

    length = strlen(str);

    for (i = 0; i < length; i++) {
        if (str[i] == ch) {
            found = 1;
            str[i] = 'k';  
        }
    }

    if (found==1) {
        printf("Found\n");
        printf("Updated string: %s\n", str);
    } else {
        printf("Character not found in the string.\n");
    }

    return 0;
}
