#include <stdio.h>

// Function to calculate sum of squares: (a^2) + (b^2)
int sumOfSquares(int a, int b)
{
    return (a * a) + (b * b);
}

int main(void)
{
    int num1, num2;

    // Prompt user for two integers
    printf("Enter the two integers: ");
    scanf("%d %d", &num1, &num2);

    // Output the result returned by sumOfSquares
    printf("Sum of squares of %d and %d is %d\n", num1, num2, sumOfSquares(num1, num2));

    return 0;
}