#include <stdio.h>

int main()
{
    // Variable for user input
    int num, originalNum, reversedNum = 0, remainder;

    // Prompt the user to enter a number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Save the original number
    originalNum = num;

    // Reverse the number
    while (num != 0)
    {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }

    // Check if the reversed number is equal to the original number
    if (originalNum == reversedNum)
    {
        printf("%d is a Palindrome number.\n", originalNum);
    }
    else
    {
        printf("%d is not a Palindrome number.\n", originalNum);
    }

    // Return 0 to indicate successful execution
    return 0;
}
