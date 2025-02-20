// 3.	Write a program in C that takes the input in two matrices of order 2x3 and 3x3 respectively. Calculate the product of two matrices in third matrix. (write and use read_arr, print_arr  and product_arr functions to get input, print and calculate the product of 2 arrays)
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

// Function to calculate the product of two matrices
void product_arr(int mat1[][3], int mat2[][3], int result[][3]) {
    // Calculate the product of mat1 (2x3) and mat2 (3x3)
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            result[i][j] = 0;  // Initialize result matrix
            for (int k = 0; k < 3; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

int main() {
    int mat1[2][3], mat2[3][3], result[2][3];

    // Read the two matrices
    read_arr(mat1, 2, 3); // Read 2x3 matrix
    read_arr(mat2, 3, 3); // Read 3x3 matrix

    // Calculate the product
    product_arr(mat1, mat2, result);

    // Print the matrices
    printf("\nMatrix 1 (2x3):");
    print_arr(mat1, 2, 3); // Print 2x3 matrix

    printf("\nMatrix 2 (3x3):");
    print_arr(mat2, 3, 3); // Print 3x3 matrix

    // Print the result matrix (product)
    printf("\nThe product of the two matrices is (2x3):");
    print_arr(result, 2, 3); // Print result of the product

    return 0;
}
 