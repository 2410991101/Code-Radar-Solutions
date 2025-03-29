// Your code here...
#include <stdio.h>

void rotateArray(int arr[], int n, int k) {
    k = k % n;
    int temp = arr[n - 1];
    for (int j = 0; j < k; j++) {
        for (int i = n - 1; i > 0; i--) {
            arr[i] = arr[i - 1];
        }
        arr[0] = temp;
        temp = arr[n - 1];
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 2;

    printf("Original array: ");
    printArray(arr, n);

    rotateArray(arr, n, k);

    printf("Rotated array: ");
    printArray(arr, n);

    return 0;
}
