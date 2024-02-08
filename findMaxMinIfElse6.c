#include <stdio.h>

int main()
{
    // Variables for user input
    int num1, num2;

    // Prompt the user to enter two numbers
    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Using if-else statements and conditional operators to find maximum and minimum
    if (num1 > num2)
    {
        printf("Maximum: %d\n", num1);
        printf("Minimum: %d\n", num2);
    }
    else if (num2 > num1)
    {
        printf("Maximum: %d\n", num2);
        printf("Minimum: %d\n", num1);
    }
    else
    {
        printf("Both numbers are equal.\n");
    }

    // Return 0 to indicate successful execution
    return 0;
}
