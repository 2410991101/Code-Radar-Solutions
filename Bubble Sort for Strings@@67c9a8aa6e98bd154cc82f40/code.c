// Your code here...
#include <stdio.h>
#include <string.h>

// Function to perform Bubble Sort on an array of strings
void bubbleSort(char arr[][100], int n) {
    char temp[100];
    int swapped;

    // Outer loop for each pass
    for (int i = 0; i < n-1; i++) {
        swapped = 0;

        // Inner loop to compare adjacent elements
        for (int j = 0; j < n-i-1; j++) {
            // If current string is greater than the next string, swap them
            if (strcmp(arr[j], arr[j+1]) > 0) {
                strcpy(temp, arr[j]);
                strcpy(arr[j], arr[j+1]);
                strcpy(arr[j+1], temp);
                swapped = 1;
            }
        }

        // If no elements were swapped in the inner loop, the array is sorted
        if (swapped == 0) {
            break;
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

