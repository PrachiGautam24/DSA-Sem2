// 2.	Write a program in C that takes the takes the number of students and roll number of the students in Data Structures Class as input from user, and after sorting the roll numbers using Selection Sort, print the roll number in ascending order. (write and use read_arr, print_arr  and SelectionSort functions to get input in array, print array and sort the array respectively)
#include<stdio.h>
void printArray(int arr[], int size);
void selectionsort(int arr[], int n);
void read_arr(int arr[],int n);
int findMin(int arr[], int k, int n);

int main(){
    int n;
    
    printf("enter the numbers of students");
    scanf("%d",&n);
    int arr[n];
    read_arr(arr,n);
    
    selectionsort(arr,n);
    printArray(arr,n);
}

void read_arr(int arr[],int n){
    printf("enter the elements of the array:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
}
    
void printArray(int arr[], int size){
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
}

void selectionsort(int arr[], int n){
    for (int i = 0; i < n - 1; i++) {
        int min = findMin(arr, i, n);
        // Swap the current element with the minimum element
        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
}
int findMin(int arr[], int k, int n) {
    int min = k;
    for (int i = k + 1; i < n; i++) {
        if (arr[i] < arr[min]) {
            min = i;
        }
    }
    return min;
}