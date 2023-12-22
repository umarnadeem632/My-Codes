#include <stdio.h>

// Function to calculate the factorial of a non-negative integer
long factorial(int n) {
    long result = 1;

    // Check if the input is a non-negative integer
    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        // Calculate the factorial using a loop
        for (int i = 1; i <= n; i++) {
            result *= i;
        }
    }

    return result;
}

// Function to generate the Fibonacci series up to n terms
void fibonacci(int n) {
    int a = 0, b = 1, nextTerm = 0;

    // Check if the input is non-positive
    if (n <= 0) {
        printf("Fibonacci series is not defined for non-positive numbers.\n");
    } else {
        printf("Fibonacci series up to %d terms: ", n);
        // Generate and print the Fibonacci series using a loop
        for (int i = 1; i <= n; i++) {
            printf("%d, ", a);
            nextTerm = a + b;
            a = b;
            b = nextTerm;
        }
    }
}

int main() {
    int number;
    long factorialResult;

    // Input a number from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Calculate and display the factorial of the entered number
    factorialResult = factorial(number);
    printf("Factorial of %d is %ld\n", number, factorialResult);

    // Generate and display the Fibonacci series up to the entered number of terms
    fibonacci(number);
    printf("...\n");

    return 0;
}

