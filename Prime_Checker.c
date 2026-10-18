#include <stdio.h>

int main() {
    int num;
    int isPrime = 1; // 1 means True (Prime), 0 means False (Not Prime)

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Edge cases: 0 and 1 are not prime numbers
    if (num <= 1) {
        isPrime = 0;
    } else {
        // Core Loop: Check for factors from 2 up to num/2
        for (int i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                isPrime = 0; // Found a factor, so it is NOT prime
                break;       // Exit the loop immediately to save time
            }
        }
    }

    // Output results based on our flag status
    if (isPrime == 1) {
        printf("%d is a PRIME number.\n", num);
    } else {
        printf("%d is NOT a prime number.\n", num);
    }

    return 0;
}
