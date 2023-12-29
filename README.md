# Project 
Components: Header Files:
c
#include <stdio.h>
#include <stdlib.h>
The program includes standard input/output and standard library headers.

Factorial Function:

c
unsigned long long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}
The factorial function is a recursive function that calculates the factorial of a given integer n.
The base case is when n is 0 or 1, in which case the factorial is 1. Otherwise, it recursively calculates the factorial by multiplying n with the factorial of n−1.

Main Function:
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
The main function is the entry point of the program.
It checks whether the program is called with exactly one command-line argument.
It converts the command-line argument to an integer using atoi.
It validates that the conversion was successful and that the number is positive.
It then calculates the factorial using the factorial function and prints the result.
The program returns 0 on success and 1 on failure.

Usage Message and Error Handling:
printf("Usage: %s <number>\n", argv[0]);
If the program is not called with the correct number of arguments, it prints a usage message.

if (number <= 0) {
    printf("Please enter a positive integer.\n");
    return 1; // Return an error code
}
If the conversion was unsuccessful or the provided number is not positive, it prints an error message and returns an error code.

Execution:
To use the program, you would compile it and run it from the command line, providing a positive integer as an argument. For example:

./factorial 5
This would calculate and print the factorial of 5.
