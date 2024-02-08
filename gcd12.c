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

    // Ensure num1 is greater than or equal to num2
    if (num1 < num2)
    {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }

    // Calculate GCD using Euclidean algorithm
    while (num2 != 0)
    {
        int temp = num2;
        num2 = num1 % num2;
        num1 = temp;
    }

    // Display the GCD
    printf("GCD of %d and %d is: %d\n", num1, num2, num1);

    // Return 0 to indicate successful execution
    return 0;
}
