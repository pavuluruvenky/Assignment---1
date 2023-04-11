#include <stdio.h>

int main() {
    int limit; // Variable to store the limit
    int i; // Loop counter

    printf("Enter the limit: ");
    scanf("%d", &limit); // Take input for the limit

    printf("Natural numbers up to %d are: ", limit);

    // Loop to generate and print natural numbers
    for (i = 1; i <= limit; i++) {
        printf("%d ", i); // Print the current natural number
    }

    printf("\n");

    return 0;
}
