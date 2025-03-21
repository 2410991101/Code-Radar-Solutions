// Your code here...
#include <stdio.h>
#include <string.h>

// Function to perform Selection Sort on an array of strings
void selectionSort(char arr[][100], int n) {
    int i, j, minIndex;
    char temp[100];

    // One by one move the boundary of the unsorted subarray
    for (i = 0; i < n - 1; i++) {
        // Find the lexicographically smallest string in the unsorted part of the array
        minIndex = i;
        for (j = i + 1; j < n; j++) {
            if (strcmp(arr[j], arr[minIndex]) < 0) {
                minIndex = j; // Update minIndex if a smaller string is found
            }
        }

        // Swap the found smallest string with the element at i
        if (minIndex != i) {
            strcpy(temp, arr[i]);
            strcpy(arr[i], arr[minIndex]);
            strcpy(arr[minIndex], temp);
        }
    }
}

// Function to print the array of strings
void printArray(char arr[][100], int size) {
    for (int i = 0; i < size; i++) {
        printf("%s\n", arr[i]);
    }
    printf("\n");
}
