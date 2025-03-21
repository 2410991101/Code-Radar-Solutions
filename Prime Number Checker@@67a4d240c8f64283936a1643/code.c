// Your code here...
#include <stdio.h>

// Function to check if a number is prime
int isPrime(int num) {
    if (num <= 1) {
        return 0; // 0 and 1 are not prime
    }
    
    // Check for factors from 2 to sqrt(num)
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0; // num is divisible by i, so it's not prime
        }
    }
    
    return 1; // num is prime
}

