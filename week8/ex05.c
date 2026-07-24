#include <stdio.h>

int main(void)
{
    int size = 6;
    int array[] = {3, 1, 2, 4, 5, 6};
    int sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum += *(array + i);
    }

    printf("The sum of array is: %d\n", sum);

    return 0;
}