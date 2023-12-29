#include <stdio.h>
#include <stdlib.h>

// Function to calculate the factorial of a number recursively
unsigned long long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main(int argc, char *argv[]) {
    // Check if there is exactly one command-line argument
    if (argc != 2) {
        printf("Usage: %s <number>\n", argv[0]);
        return 1; // Return an error code
    }

    // Convert the command-line argument to an integer
    int number = atoi(argv[1]);

    // Check if the conversion was successful
    if (number <= 0) {
        printf("Please enter a positive integer.\n");
        return 1; // Return an error code
    }

    // Calculate and print the factorial
    unsigned long long result = factorial(number);
    printf("The factorial of %d is %llu\n", number, result);

    return 0; // Return success
}