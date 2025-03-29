// Your code here...
#include <stdio.h>

// This program checks if an array is sorted in ascending order
int main() {
    int n, sorted = 1;
    
    // Prompt the user to enter the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    
    // Input the array elements
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Check if the array is sorted in ascending order
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            sorted = 0;
            break;
        }
    }
    
    // Print the result
    if (sorted) {
        printf("The array is sorted.\n");
    } else {
        printf("The array is not sorted.\n");
    }
    
    return 0;
}