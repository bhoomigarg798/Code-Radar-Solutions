#include <stdio.h>

// Function to check if a number is prime
int isPrime(int num) {
    if (num < 2) return 0;  // Numbers < 2 are not prime

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0;  // If divisible, not prime
    }
    return 1;  // Prime number
}

// Function to print all prime numbers in a given range
void printPrimesInRange(int a, int b) {
    int found = 0; // Flag to check if any prime numbers were found
    for (int i = a; i <= b; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
            found = 1;
        }
    }

    if (!found) {
        printf("No prime numbers in this range.");
    }
    printf("\n");
}