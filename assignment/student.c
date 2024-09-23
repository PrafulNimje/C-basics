// //There is a student named "XYZ" in the class who has passed in some subjects and failed in some. Write a program to count the number of subjects he passed and number he has failed. Marks below SO are considered as fail.
// • if he has passed in all the subjects, print "XYZ has passed in all subjects"If he has failed in all the subjects, print "XYZ has failed in all subjects".
// Else print " xyz "has passed in <passed number subjects and failed number subjects"
// Note: 1D array to be used whose size should be defined using a macro. Marks of 6 subjects should be accepted from the user
// Write functions perform the tasks:
// *Accepting values - void AcceptMarks(int mks|], int n);
// *Displaying marks - void DisplayMarks(int mks(I, int n);
// *Counting the passed and failed subjects - void CountSubjects (int misll, int n):#include <stdio.h>


#include<stdio.h>

void AcceptMarks(int mks[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Enter marks for subject %d: ", i + 1);
        scanf("%d", &mks[i]);
    }
}

void DisplayMarks(int mks[], int n) {
    printf("Marks of the student:\n");
    for (int i = 0; i < n; i++) {
        printf("Subject %d: %d\n", i + 1, mks[i]);
    }
}

void Result(int mks[], int n) {
    int passed = 0, failed = 0;

    for (int i = 0; i < n; i++) {
        if (mks[i] >= 50) {
            passed++;
        } else {
            failed++;
        }
    }

    if (passed == n) {
        printf("XYZ has passed in all subjects.\n");
    } else if (failed == n) {
        printf("XYZ has failed in all subjects.\n");
    } else {
        printf("XYZ has passed in %d subjects and failed in %d subjects.\n", passed, failed);
    }
}

int main() {
    int marks[6];  

    AcceptMarks(marks, 6);  
    DisplayMarks(marks, 6); 
    Result(marks, 6);  

    return 0;
}
