// 3.	Write a program in C that takes the takes the number of purchases and bill amount of those purchases as input from user, and after sorting the bill amount using Insertion Sort, print the bill amount of purchases in descending order. (write and use read_arr, print_arr  and InsertionSort functions to get input in array, print array and sort the array respectively)
#include<stdio.h>
void printArray(int arr[], int size);
void insertionsort(int arr[], int n);
void read_arr(int arr[],int n);

int main(){
    int n;
    
    printf("enter the numbers of students");
    scanf("%d",&n);
    int arr[n];
    read_arr(arr,n);
    
    insertionsort(arr,n);
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

void insertionsort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

        // Move elements of arr[0..i-1], that are smaller than key, to one position ahead
        while (j >= 0 && arr[j] < key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}
