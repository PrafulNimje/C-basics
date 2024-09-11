// Write a macro NEWLINE to print two blank lines on the console

#include <stdio.h>

#define NEWLINE() printf("\n\n")

int main() {
    printf("Hello, World!");
    
    NEWLINE();
    
    printf("This is after two blank lines.");
    
    return 0;
}
