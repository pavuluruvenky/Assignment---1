#include <stdio.h>

int main() {
    int n; // Number of terms in Fibonacci sequence
    int fib1 = 0; // First Fibonacci number
    int fib2 = 1; // Second Fibonacci number

    // Input number of terms from user
    printf("Enter the number of terms for Fibonacci sequence: ");
    scanf("%d", &n);

    // Print the first two Fibonacci numbers
    printf("Fibonacci sequence: %d %d ", fib1, fib2);

    // Generate and print the subsequent Fibonacci numbers
    int i, fib;
    for (i = 2; i < n; i++) {
        fib = fib1 + fib2;
        printf("%d ", fib);
        // Update fib1 and fib2 for the next iteration
        fib1 = fib2;
        fib2 = fib;
    }

    printf("\n"); // Print a newline after the sequence is generated

    return 0;
}
