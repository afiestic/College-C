#include <stdio.h>

int main()
{
    // Variables for user input
    int arraySize;

    // Prompt the user to enter the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &arraySize);

    // Check if the size is greater than 0
    if (arraySize <= 0)
    {
        printf("Invalid input. Please enter a positive size.\n");
        return 1; // Return 1 to indicate an error
    }

    // Declare an array of the specified size
    int numbers[arraySize];

    // Prompt the user to enter numbers
    printf("Enter %d numbers:\n", arraySize);
    for (int i = 0; i < arraySize; i++)
    {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    // Perform sorting using bubble sort
    for (int i = 0; i < arraySize - 1; i++)
    {
        for (int j = 0; j < arraySize - i - 1; j++)
        {
            if (numbers[j] > numbers[j + 1])
            {
                // Swap numbers[j] and numbers[j + 1] if they are in the wrong order
                int temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }

    // Display the sorted numbers
    printf("Sorted numbers in ascending order:\n");
    for (int i = 0; i < arraySize; i++)
    {
        printf("%d ", numbers[i]);
    }

    // Return 0 to indicate successful execution
    return 0;
}
