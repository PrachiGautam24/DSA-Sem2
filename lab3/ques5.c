// 5.	Write a program in C that takes the number of items and item number of the items in a grocery shop as input from user (in sorted order), then ask for a particular item number, and check if that item number exists in the shop. (write and use read_arr, print_arr  and Binary Search functions to get input in array, print array and search for a particular value respectively). 
#include <stdio.h>

// Function to read the item numbers of the items into an array
void read_arr(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Enter item number for item %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
}

// Function to print the item numbers stored in the array
void print_arr(int arr[], int n) {
    printf("Item numbers in the shop:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Function to perform Binary Search to find a particular item number
int BinarySearch(int arr[], int n, int item_no) {
    int left = 0, right = n - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        
        // Check if item is present at mid
        if (arr[mid] == item_no) {
            return mid;  // Return the index if item number is found
        }
        
        // If item number is greater, ignore the left half
        if (arr[mid] < item_no) {
            left = mid + 1;
        }
        // If item number is smaller, ignore the right half
        else {
            right = mid - 1;
        }
    }
    return -1;  // Return -1 if item number is not found
}

int main() {
    int n;
    
    // Get the number of items from the user
    printf("Enter the number of items in the shop: ");
    scanf("%d", &n);
    
    int item_numbers[n];
    
    // Read the item numbers (assumed to be in sorted order)
    read_arr(item_numbers, n);
    
    // Print the item numbers of all items in the shop
    print_arr(item_numbers, n);
    
    int search_item_no;
    
    // Ask for the item number to search for
    printf("Enter the item number to search for: ");
    scanf("%d", &search_item_no);
    
    // Perform the binary search
    int result = BinarySearch(item_numbers, n, search_item_no);
    
    if (result != -1) {
        printf("Item number %d found at index %d.\n", search_item_no, result);
    } else {
        printf("Item number %d not found in the shop.\n", search_item_no);
    }

    return 0;
}
