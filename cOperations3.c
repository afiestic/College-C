#include <stdio.h>

int main()
{
    // Example without using scanf()
    int a = 5, b = 2, result;

    // Arithmetic operations
    result = a + b;
    printf("Addition: %d\n", result);

    result = a - b;
    printf("Subtraction: %d\n", result);

    result = a * b;
    printf("Multiplication: %d\n", result);

    result = a / b;
    printf("Division: %d\n", result);

    // Modulus (remainder) operation
    result = a % b;
    printf("Modulus: %d\n", result);

    // Example with using scanf()
    int num1, num2;

    // Prompt the user to enter two numbers
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    // Arithmetic operations with user input
    result = num1 + num2;
    printf("User Input - Addition: %d\n", result);

    result = num1 - num2;
    printf("User Input - Subtraction: %d\n", result);

    result = num1 * num2;
    printf("User Input - Multiplication: %d\n", result);

    result = num1 / num2;
    printf("User Input - Division: %d\n", result);

    // Modulus (remainder) operation with user input
    result = num1 % num2;
    printf("User Input - Modulus: %d\n", result);

    // Return 0 to indicate successful execution
    return 0;
}
