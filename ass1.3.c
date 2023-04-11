#include <stdio.h>

// Function to calculate the sum of digits of a number
int sum_of_digits(int num) {
    int sum = 0; // Initialize the sum to 0

    // Loop to extract each digit from the number
    while (num > 0) {
        int digit = num % 10; // Extract the last digit
        sum += digit; // Add the digit to the sum
        num /= 10; // Remove the last digit from the number
    }

    return sum;
}

int main() {
    int num; // Variable to store the input number

    printf("Enter a number: ");
    scanf("%d", &num); // Take input for the number

    int sum = sum_of_digits(num); // Call the sum_of_digits() function
    printf("Sum of digits of %d is: %d\n", num, sum); // Print the calculated sum of digits

    return 0;
}
