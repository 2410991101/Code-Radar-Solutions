// Your code here...
#include <stdio.h>

// Function to find the minimum length of the subarray to be sorted
int findUnsortedSubarray(int arr[], int n) {
    int start = -1, end = -1;
    int min = arr[n-1], max = arr[0];

    // Find the first element from left which is out of order
    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[i-1]) {
            start = i-1;
            break;
        }
    }

    // If no such element, array is already sorted
    if (start == -1) {
        return 0;  // Array is already sorted
    }

    // Find the first element from right which is out of order
    for (int i = n-2; i >= 0; i--) {
        if (arr[i] > arr[i+1]) {
            end = i+1;
            break;
        }
    }

    // Find the min and max in the subarray between start and end
    for (int i = start; i <= end; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    // Extend the subarray to include any elements outside the subarray that 
    // are greater than min or less than max
    while (start > 0 && arr[start-1] > min) {
        start--;
    }

    while (end < n-1 && arr[end+1] < max) {
        end++;
    }

    // Return the length of the subarray
    return end - start + 1;
}


