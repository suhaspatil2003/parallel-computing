#include <stdio.h>
#include <stdbool.h>

// Function to check if a number is prime
bool isPrime(int n) {
    if (n <= 1)
        return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

// Function to find the largest prime less than the given number
int largestPrimeLessThan(int num) {
    for (int i = num - 1; i >= 2; i--) {
        if (isPrime(i)) {
            return i;
        }
    }
    return -1; // No prime found
}

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    int result = largestPrimeLessThan(number);

    if (result != -1)
        printf("The largest prime number less than %d is %d\n", number, result);
    else
        printf("There is no prime number less than %d\n", number);

    return 0;
}
