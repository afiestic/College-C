#include <stdio.h>

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
        int isPrime = 1; // Assume i is prime

        if (i <= 1)
        {
            isPrime = 0; // Not prime
        }
        else
        {
            for (int j = 2; j * j <= i; j++)
            {
                if (i % j == 0)
                {
                    isPrime = 0; // Not prime
                    break;
                }
            }
        }

        if (isPrime)
        {
            printf("%d ", i);
        }
    }

    // Return 0 to indicate successful execution
    return 0;
}
