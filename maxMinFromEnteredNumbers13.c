#include <stdio.h>

int main()
{
    // Variable for the number of elements (n)
    int n;

    // Prompt the user to enter the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Check if the number of elements is greater than 0
    if (n <= 0)
    {
        printf("Invalid input. Please enter a positive number of elements.\n");
        return 1; // Return 1 to indicate an error
    }

    // Variables for user input
    int number, max, min;

    // Prompt the user to enter the first number
    printf("Enter number 1: ");
    scanf("%d", &number);

    // Assume the first number is both the maximum and minimum
    max = min = number;

    // Loop to compare the rest of the numbers
    for (int i = 2; i <= n; i++)
    {
        printf("Enter number %d: ", i);
        scanf("%d", &number);

        // Update maximum if the entered number is greater
        if (number > max)
        {
            max = number;
        }

        // Update minimum if the entered number is smaller
        if (number < min)
        {
            min = number;
        }
    }

    // Display the maximum and minimum
    printf("Maximum: %d\n", max);
    printf("Minimum: %d\n", min);

    // Return 0 to indicate successful execution
    return 0;
}
