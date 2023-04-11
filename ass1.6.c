#include <stdio.h>

// Function to find the GCD of two numbers
int gcd(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return gcd(b, a % b);
    }
}

// Function to find the LCM of two numbers
int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int num1, num2; // Variables to store the input numbers

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2); // Take input for the numbers

    // Call the gcd() function to find the GCD
    int gcd_result = gcd(num1, num2);
    printf("GCD of %d and %d is: %d\n", num1, num2, gcd_result);

    // Call the lcm() function to find the LCM
    int lcm_result = lcm(num1, num2);
    printf("LCM of %d and %d is: %d\n", num1, num2, lcm_result);

    return 0;
}
