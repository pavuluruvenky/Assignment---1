#include <stdio.h>

int main() {
    int num; // Variable to store the input number

    printf("Enter a number: ");
    scanf("%d", &num); // Take input for the number

    // Check if the number is positive, negative, or zero
    if (num > 0) {
        printf("%d is a positive number.\n", num);
    } else if (num < 0) {
        printf("%d is a negative number.\n", num);
    } else {
        printf("%d is zero.\n", num);
    }

    return 0;
}
