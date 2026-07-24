#include <stdio.h>

// Function to check if a given number is prime
// Returns 1 if the number is prime, and 0 if it is not
int isPrime(int num)
{
    // Any number less than 2 (e.g., 0, 1, or negative numbers) is not prime
    if (num < 2)
    {
        return 0;
    }

    // Check for factors from 2 up to sqrt(num) (written as i * i <= num for efficiency)
    for (int i = 2; i * i <= num; i++)
    {
        // If num is evenly divisible by i, it has a factor other than 1 and itself
        if (num % i == 0)
        {
            return 0; // Not a prime number
        }
    }

    // If no factors were found in the loop, the number is prime
    return 1;
}

int main(void)
{
    int start, end;

    // Ask the user to input the range boundaries
    printf("Enter the start and end numbers: ");
    scanf("%d %d", &start, &end);

    printf("The prime numbers within the intervals are:\n");

    // Loop through every integer in the range from 'start' to 'end'
    for (int i = start; i <= end; i++)
    {
        // Call isPrime() for current number 'i'
        // If it returns 1 (true), print the number
        if (isPrime(i))
        {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}