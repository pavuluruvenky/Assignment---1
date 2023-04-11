#include <stdio.h>

// Function to calculate the factorial of a number
unsigned long long int factorial(int n) {
    // Base case: factorial of 0 and 1 is 1
    if (n == 0 || n == 1)
        return 1;

    // Initialize the result variable to store the factorial
    unsigned long long int result = 1;

    // Iterate from 2 to n (inclusive) and multiply each number to the result
    for (int i = 2; i <= n; i++) {
        result *= i;
    }

    return result;
}

int main() {
    int num_of_numbers; // Variable to store the number of numbers to calculate factorial for

    printf("Enter the number of numbers to calculate factorial for: ");
    scanf("%d", &num_of_numbers); // Take input for the number of numbers

    // Loop through each number and calculate its factorial
    for (int i = 0; i < num_of_numbers; i++) {
        int num;
        printf("Enter number %d: ", i + 1);
        scanf("%d", &num); // Take input for the number

        unsigned long long int fact = factorial(num); // Call the factorial function
        printf("Factorial of %d is: %llu\n", num, fact); // Print the calculated factorial value
    }

    return 0;
}
