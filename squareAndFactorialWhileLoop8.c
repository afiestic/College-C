#include <stdio.h>

int main()
{
    // Variable for user input
    int num;

    // Prompt the user to enter a number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Calculate and print the square using a while loop
    int square = 1;
    int i = 1;
    while (i <= 2)
    {
        square *= num;
        i++;
    }
    printf("Square of %d: %d\n", num, square);

    // Calculate and print the factorial using a while loop
    int factorial = 1;
    i = 1;
    while (i <= num)
    {
        factorial *= i;
        i++;
    }
    printf("Factorial of %d: %d\n", num, factorial);

    // Return 0 to indicate successful execution
    return 0;
}
