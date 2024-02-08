#include <stdio.h>
#include <math.h>

int main()
{
    // Variable for user input
    int num, originalNum, digitCount = 0, sum = 0, remainder;

    // Prompt the user to enter a number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Save the original number
    originalNum = num;

    // Count the number of digits in the number
    while (originalNum != 0)
    {
        originalNum /= 10;
        digitCount++;
    }

    // Reset originalNum to the user input
    originalNum = num;

    // Calculate the sum of each digit raised to the power of the digit count
    while (originalNum != 0)
    {
        remainder = originalNum % 10;
        sum += pow(remainder, digitCount);
        originalNum /= 10;
    }

    // Check if the sum is equal to the original number
    if (sum == num)
    {
        printf("%d is an Armstrong number.\n", num);
    }
    else
    {
        printf("%d is not an Armstrong number.\n", num);
    }

    // Return 0 to indicate successful execution
    return 0;
}
