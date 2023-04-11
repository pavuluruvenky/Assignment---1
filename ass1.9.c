#include <stdio.h>

int isPerfect(int num) {
    int sum = 0;
    // Check for proper divisors from 1 to num/2
    for(int i=1;i<=num / 2;i++) 
	{
        if (num % i == 0) 
		{
            sum += i; // Add proper divisors to the sum
        }
    }
    if (sum == num) 
	{
        return 1; // If sum of proper divisors equals num, it's a perfect number
    } else
	 {
        return 0; // Otherwise, it's not a perfect number
    }
}

int main() {
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (isPerfect(num)) {
        printf("%d is a perfect number.\n", num);
    } else {
        printf("%d is not a perfect number.\n", num);
    }

    return 0;
}
