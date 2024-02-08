#include <stdio.h>

// Function to check if a number is prime
int isPrime(int num)
{
    if (num <= 1)
    {
        return 0; // Not prime
    }

    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            return 0; // Not prime
        }
    }

    return 1; // Prime
}

int main()
{
    // Variable for user input
    int n;

    // Prompt the user to enter a number
    printf("Enter a number (n): ");
    scanf("%d", &n);

    // Check and generate prime numbers up to n
    printf("Prime numbers up to %d: ", n);
    for (int i = 2; i <= n; i++)
    {
        if (isPrime(i))
        {
            printf("%d ", i);
        }
    }

    // Return 0 to indicate successful execution
    return 0;
}
