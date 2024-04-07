#include <stdio.h>

int main() {
    int marks[5][5];
    int i, j;

    // Input marks for each student
    for (i = 0; i < 5; i++) {
        printf("Enter marks for student %d:\n", i + 1);
        for (j = 0; j < 5; j++) {
            printf("Subject %d: ", j + 1);
            scanf("%d", &marks[i][j]);
        }
        printf("\n");
    }

    // Calculate average marks and display grades
    for (i = 0; i < 5; i++) {
        int total = 0;
        for (j = 0; j < 5; j++) {
            total += marks[i][j];
        }
        int average = total / 5;
        char grade;

        if (average >= 80 && average <= 100) {
            grade = 'A';
        } 
        else if (average >= 70 && average <= 79) {
            grade = 'B';
        } 
        else if (average >= 60 && average <= 69) {
            grade = 'C';
        } 
        else if (average >= 50 && average <= 59) {
            grade = 'D';
        } 
        else if (average >= 40 && average <= 49) {
            grade = 'E';
        } 
        else {
            grade = 'F';
        }
        printf("Student %d: Grade %c\n", i + 1, grade);
    }

    return 0;
}