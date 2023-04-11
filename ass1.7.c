#include <stdio.h>

int main() {
    int n; // Variable to store the value of N
    int i; // Loop counter
    int num; // Variable to store the input numbers
    int sum = 0; // Variable to store the sum

    printf("Enter the value of N: ");
    scanf("%d", &n); // Take input for N

    printf("Enter %d numbers: ", n);
    for (i = 1; i <= n; i++) {
        scanf("%d", &num); // Take input for each number
        sum += num; // Add the number to the sum
    }

    printf("Sum of %d numbers is: %d\n", n, sum);

    return 0;
}
