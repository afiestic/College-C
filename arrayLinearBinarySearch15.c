#include <stdio.h>

int main()
{
    // Variables for user input
    int arraySize, searchTarget;

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
    int array[arraySize];

    // Prompt the user to enter elements
    printf("Enter %d elements:\n", arraySize);
    for (int i = 0; i < arraySize; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    // Prompt the user to enter the element to search
    printf("Enter the element to search: ");
    scanf("%d", &searchTarget);

    // Perform linear search
    int linearResult = -1;
    for (int i = 0; i < arraySize; i++)
    {
        if (array[i] == searchTarget)
        {
            linearResult = i;
            break; // Exit the loop if the element is found
        }
    }

    // Perform binary search
    int low = 0, high = arraySize - 1, binaryResult = -1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (array[mid] == searchTarget)
        {
            binaryResult = mid;
            break; // Exit the loop if the element is found
        }
        else if (array[mid] < searchTarget)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    // Display the results
    if (linearResult != -1)
    {
        printf("Linear Search: Element %d found at index %d\n", searchTarget, linearResult);
    }
    else
    {
        printf("Linear Search: Element %d not found\n", searchTarget);
    }

    if (binaryResult != -1)
    {
        printf("Binary Search: Element %d found at index %d\n", searchTarget, binaryResult);
    }
    else
    {
        printf("Binary Search: Element %d not found\n", searchTarget);
    }

    // Return 0 to indicate successful execution
    return 0;
}
