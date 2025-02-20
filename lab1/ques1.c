// 1.	Write a program in C to read and print marks of 10 students (use separatel functions for inputting & printing marks).
#include <stdio.h>

// Function to input marks of 10 students
void inputMarks(int marks[], int n) {
    printf("Enter marks for %d students:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Student %d: ", i + 1);
        scanf("%d", &marks[i]);
    }
}

// Function to print marks of 10 students
void printMarks(int marks[], int n) {
    printf("\nMarks of the students are:\n");
    for (int i = 0; i < n; i++) {
        printf("Student %d: %d\n", i + 1, marks[i]);
    }
}

int main() {
    int marks[10];  // Array to store marks of 10 students
    int n = 10;     // Number of students
    
    inputMarks(marks, n);  // Call function to input marks
    printMarks(marks, n);  // Call function to print marks

    return 0;
}
