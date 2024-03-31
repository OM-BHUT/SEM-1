#include <stdio.h>

int main() {
    int n;

    // Input the value of n (position of the Fibonacci number)
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Check if n is non-negative
    if (n < 0) {
        printf("Invalid input. Please enter a non-negative number.\n");
        return 1; // Exit the program with an error code
    }

    int first = 0, second = 1, next;

    // Special case for n = 0
    if (n == 0) {
        printf("The 0th Fibonacci number is: 0\n");
        return 0;
    }

    // Calculate and print the nth Fibonacci number without using a second function
    for (int i = 2; i <= n; ++i) {
        next = first + second;
        first = second;
        second = next;
    }

    printf("The %dth Fibonacci number is: %d\n", n, second);

    return 0;
}

