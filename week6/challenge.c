#include <stdio.h>

int main(void)
{
    int size;

    printf("Enter number of elements: ");
    if (scanf("%d", &size) != 1 || size <= 0)
    {
        return (1);
    }

    int numbers[size];

    printf("Enter %d integers: ", size);
    for (int i = 0; i < size; i++)
    {
        if (scanf("%d", &numbers[i]) != 1)
        {
            return (1);
        }
    }

    int target;
    printf("Enter number to search for: ");
    if (scanf("%d", &target) != 1)
    {
        return (1);
    }

    int occurrences = 0;
    for (int i = 0; i < size; i++)
    {
        if (numbers[i] == target)
        {
            occurrences++;
        }
    }

    printf("Number %d appears %d times.\n", target, occurrences);

    return (0);
}