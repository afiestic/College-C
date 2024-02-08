#include <stdio.h>

int main()
{
    // Variables for user input
    int num1, num2, temp;

    // Prompt the user to enter two numbers
    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Display the original numbers
    printf("\nOriginal Numbers: num1 = %d, num2 = %d\n", num1, num2);

    // Swap the numbers using a temporary variable
    temp = num1;
    num1 = num2;
    num2 = temp;

    // Display the swapped numbers
    printf("Swapped Numbers: num1 = %d, num2 = %d\n", num1, num2);

    // Return 0 to indicate successful execution
    return 0;
}
