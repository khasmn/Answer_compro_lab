#include <stdio.h>

int main()
{
    int array[] = {3, 1, 2, 4, 5, 6};
    int size = 6;
    int max = *array;

    for (int i = 1; i < size; i++)
    {
        if (*(array + i) > max)
        {
            max = *(array + i);
        }
    }

    printf("Max value: %d\n", max);

    return 0;
}