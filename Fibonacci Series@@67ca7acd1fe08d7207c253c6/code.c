// Your code here...
#include <stdio.h>

// Function to generate Fibonacci series up to n terms
void generateFibonacci(int n) {
    int first = 0, second = 1, next;

    // Print the first n Fibonacci numbers
    if (n <= 0) {
        printf("Please enter a positive number for n.\n");
        return;
    }

    printf("Fibonacci Series up to %d terms: \n", n);

    // Handle the first two terms
    if (n >= 1) {
        printf("%d ", first);
    }
    if (n >= 2) {
        printf("%d ", second);
    }

    // Calculate the next terms of the Fibonacci series
    for (int i = 3; i <= n; i++) {
        next = first + second;
        printf("%d ", next);
        first = second;  // Move first to second
        second = next;   // Move second to next
    }

    printf("\n");
}
