//Write a menu driven program that provides user with options to:
//Compare two strings.
//Concatenate two strings.
//Copy one string into another.

#include<stdio.h>
#include<string.h>

int compareStrings(char [], char []);
void concatenateStrings(char [],char []);
void copyString(char [], char []);

int main() {
    int choice;
    int res;
    char s1[20], s2[20];
    printf("Enter first string: ");
    gets(s1);
    printf("Enter second string: ");
    gets(s2);

    do {
        printf("\nMenu:\n");
        printf("1. Compare two strings\n");
        printf("2. Concatenate two strings\n");
        printf("3. Copy one string into another\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                res=compareStrings(s1,s2);
                if(res<0){
                    printf("String 1 is less than String 2\n");
                }
                else if(res > 0){
                    printf("String 1 is greater than String 2\n");
                }
                else{
                    printf("Both string are equal\n");
                }
                break;
            case 2:
                concatenateStrings(s1,s2);
                printf("Concatenated String is: %s",s1);
                break;
            case 3:
                copyString(s1,s2);
                printf("Copied String is: %s",s2);
                break;
            case 4:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice!\n");
        }
    } while (choice != 4);
    
    return 0;
}

int compareStrings(char s1[],char s2[]){

    int i,d;
    for(i=0;s1[i]==s2[i];i++){
        if(s1[i]!='\0'){
            return 0;
        }
    }

    d=s1[i] - s2[i];
    return d;
}

void concatenateStrings(char s1[],char s2[]){
    int i=0,j=0;
    while (s1[i]!='\0')
    {
        i++;
    }
    while (s2[j]!='\0')
    {
        s1[i]=s2[j];
        j++;
        i++;
    }
    s1[i]='\0';
}

void copyString(char s1[], char s2[]){

    int i =0;

    while(s1[i]!='\0'){
        s2[i]=s1[i];
        i++;
    }
    s2[i]='\0';
}
