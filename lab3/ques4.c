// 4.	Write a program in C that takes the number of students and roll number of the students in Data Structures Class as input from user, then ask for a particular student roll no, and check if that roll no student exists in the class. (write and use read_arr, print_arr  and Linear Search functions to get input in array, print array and search for a particular value respectively). 
#include<stdio.h>
void read_arr(int arr[], int n);
void print_arr(int arr[], int n);
int LinearSearch(int arr[], int n, int roll_no);
int main(){
    int n;
    printf("enter the number of students ");
    scanf("%d",&n);
    
    int roll_no[n];
    read_arr(roll_no, n);
    print_arr(roll_no,n);

    int search_rollno;
    printf("Enter the roll number to search for: ");
    scanf("%d", &search_rollno);

    int result = LinearSearch(roll_no, n, search_rollno);

    if (result != -1) {
        printf("Roll number %d found at index %d.\n", search_rollno, result);
    } else {
        printf("Roll number %d not found in the class.\n", search_rollno);
    }

    return 0;
}

void read_arr(int arr[], int n){
    for(int i=0;i<n;i++){
        printf("enter the roll no. of the students %d : ",i+1);
        scanf("%d",&arr[i]);
    }
}

void print_arr(int arr[], int n){
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    printf("\n");
}

int LinearSearch(int arr[], int n, int roll_no){
    for (int i = 0; i < n; i++) {
        if (arr[i] == roll_no) {
            return i;  // Return the index if roll number is found
        }
    }
    return -1; 
}
