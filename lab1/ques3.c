// 3.	 Write a program in C to find the highest marks obtained out of 10 students (use function to find largest).

#include <stdio.h>

// Function to find the highest mark
int findHighest(int marks[], int n) {
    int highest = marks[0];  // Assume the first mark is the highest initially
    for (int i = 1; i < n; i++) {
        if (marks[i] > highest) {
            highest = marks[i];  // Update if a higher mark is found
        }
    }
    return highest;
}

int main() {
    int marks[10];  // Array to store marks of 10 students
    int n = 10;     // Number of students
    
    printf("Enter marks for 10 students:\n");
    for (int i = 0; i < n; i++) {
        printf("Student %d: ", i + 1);
        scanf("%d", &marks[i]);
    }

    // Call function to find the highest mark
    int highest = findHighest(marks, n);

    printf("\nThe highest mark obtained is: %d\n", highest);

    return 0;
}

