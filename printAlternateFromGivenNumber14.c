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

    // Variable for user input
    int number;

    // Loop to print alternate numbers
    printf("Enter %d numbers:\n", n);
    for (int i = 1; i <= n; i++)
    {
        // Prompt the user to enter a number
        printf("Enter number %d: ", i);
        scanf("%d", &number);

        // Print the number if it's at an odd position (1, 3, 5, ...)
        if (i % 2 != 0)
        {
            printf("Alternate number: %d\n", number);
        }
    }

    // Return 0 to indicate successful execution
    return 0;
}
