// Your code here...
#include <stdio.h>

// This program checks if an array is sorted in ascending order
int main() {
    int n, sorted = 1;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            sorted = 0;
            break;
        }
    }
    
    // Print the result
    if (sorted) {
        printf("Sorted\n");
    } else {
        printf("Not sorted\n");
    }
    
    return 0;
}