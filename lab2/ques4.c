// 4.	Write a program in C to print the transpose of a matrix of order 3x3. (write and use read_arr, print_arr  and transpose_arr functions to get input, print and calculate the transpose of 2 arrays)
#include <stdio.h>

// Function to read a matrix
void read_arr(int arr[][3], int rows, int cols) {
    printf("Enter the elements of the matrix (%dx%d):\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }
    }
}

// Function to print a matrix
void print_arr(int arr[][3], int rows, int cols) {
    printf("\nMatrix is:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

// Function to calculate the transpose of a matrix
void transpose_arr(int arr[][3], int transpose[][3], int rows, int cols) {
    // Calculate the transpose by swapping rows and columns
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            transpose[j][i] = arr[i][j];
        }
    }
}

int main() {
    int mat[3][3], transpose[3][3];
    int rows = 3, cols = 3;
    
    // Read the matrix
    read_arr(mat, rows, cols);  // Read 3x3 matrix
    
    // Calculate the transpose
    transpose_arr(mat, transpose, rows, cols);
    
    // Print the original matrix
    printf("\nOriginal Matrix (3x3):");
    print_arr(mat, rows, cols);
    
    // Print the transpose matrix
    printf("\nTranspose of the Matrix (3x3):");
    print_arr(transpose, cols, rows);
    
    return 0;
}
