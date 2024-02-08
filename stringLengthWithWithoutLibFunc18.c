#include <stdio.h>
#include <string.h>

int main()
{
    // Declare a character array (string)
    char inputString[100];

    // Prompt the user to enter a string
    printf("Enter a string: ");
    scanf("%s", inputString);

    // Calculate length without using library function
    int lengthWithoutLibrary = 0;
    while (inputString[lengthWithoutLibrary] != '\0')
    {
        lengthWithoutLibrary++;
    }

    // Calculate length using library function
    int lengthWithLibrary = strlen(inputString);

    // Display the lengths
    printf("Length without using library function: %d\n", lengthWithoutLibrary);
    printf("Length using library function: %d\n", lengthWithLibrary);

    return 0;
}
