// 2.	Write a program in C to create a list of marks of 10 students in descending order, given input of marks in ascending order.
#include<stdio.h>
void inputMarks(int marks[], int n);
int print(int marks[],int n);
int main(){
    int marks[10];  // Array to store marks of 10 students
    int n = 10;     // Number of students
    
    inputMarks(marks, n);
    print(marks,n);
    return 0;
}
int print(int marks[],int n){
    printf("The array is: ");
    for(int i=n ;i>=0;i--){
        printf("%d element is %d \ns",i,marks[i]);
    }
}
void inputMarks(int marks[], int n) {
    printf("Enter marks for %d students in ascending order:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Student %d: ", i + 1);
        scanf("%d", &marks[i]);
    }
}
