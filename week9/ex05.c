#include <stdio.h>

int sumEven(const int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            sum += arr[i];
        }
    }
    return sum;
}

int sumOdd(const int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 != 0)
        {
            sum += arr[i];
        }
    }
    return sum;
}

int main(void)
{
    int n;

    printf("N: ");
    scanf("%d", &n);

    int numbers[n];

    for (int i = 0; i < n; i++)
    {
        printf("Input: ");
        scanf("%d", &numbers[i]);
    }

    printf("Output: Sum of even number: %d\n", sumEven(numbers, n));
    printf("Sum of odd number: %d\n", sumOdd(numbers, n));

    return 0;
}