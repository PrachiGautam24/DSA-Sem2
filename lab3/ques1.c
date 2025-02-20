// 1.	Write a program in C that takes the number of students and marks obtained by the students in Data Structures as input from user, and after sorting the marks using Bubble Sort, print the marks in ascending order. (write and use read_arr, print_arr  and BubbleSort functions to get input in array, print array and sort the array respectively) 
#include<stdio.h>
void printArray(int arr[], int size);
void bubbleSort(int arr[], int n);
void read_arr(int arr[],int n);

int main(){
    int n;
    
    printf("enter the numbers of students");
    scanf("%d",&n);
    int arr[n];
    read_arr(arr,n);
    
    bubbleSort(arr,n);
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

void bubbleSort(int arr[], int n){
    int i, j;
    for (i = 0; i < n ; i++) {
        for (j = 0; j < n - i - 1; j++) { 
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j] ;
                arr[j]  = arr[j + 1];
                arr[j + 1] = temp;
                
            }
        }
    }
}
