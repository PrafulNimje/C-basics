//SEED Infotech is offering a variety of courses to students. 
//Students have the facility to check if a particular course is available in the institution. 
//Write a C program to perform the following tasks:
//*.Search a course
//*.Sort the list of courses in ascending order of alphabets
//*.Sort the list of courses in ascending order of the length of their spelling

#include <stdio.h>
#include <string.h>

int searchCourse(char courses[][50], int n, char courseName[]) {
    for (int i = 0; i < n; i++) {
        if (strcmp(courses[i], courseName) == 0) {
            return 1; 
        }
    }
    return 0;  
}

void sortAlphabetically(char courses[][50], int n) {
    char temp[50];
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(courses[i], courses[j]) > 0) {

                strcpy(temp, courses[i]);
                strcpy(courses[i], courses[j]);
                strcpy(courses[j], temp);
            }
        }
    }
}

void sortByLength(char courses[][50], int n) {
    char temp[50];
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strlen(courses[i]) > strlen(courses[j])) {

                strcpy(temp, courses[i]);
                strcpy(courses[i], courses[j]);
                strcpy(courses[j], temp);
            }
        }
    }
}

void printCourses(char courses[][50], int n) {
    for (int i = 0; i < n; i++) {
        printf("%s\n", courses[i]);
    }
}

int main() {
    char courses[6][50] = {
        "Java",
        "Python",
        "Data Structures",
        "Web Development",
        "C",
        "Machine Learning"
    };

    int n = 6;
    char search[50];
    int choice;

    do {
        printf("\nMenu:\n");
        printf("1. Search a course\n");
        printf("2. Sort courses alphabetically\n");
        printf("3. Sort courses by length\n");
        printf("4. Exit\n");
        printf("Enter your choice: \n");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the course name to search: ");
                scanf(" %s", search);  
                if (searchCourse(courses, n, search)) {
                    printf("Course found!\n");
                } else {
                    printf("Course not found.\n");
                }
                break;

            case 2:
                sortAlphabetically(courses, n);
                printf("\nCourses sorted alphabetically:\n");
                printCourses(courses, n);
                break;

            case 3:
                sortByLength(courses, n);
                printf("\nCourses sorted by length:\n");
                printCourses(courses, n);
                break;

            case 4:
                printf("Exit program.\n");
                break;

            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 4);

    return 0;
}
