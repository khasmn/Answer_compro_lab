#include <stdio.h>

int main(void)
{
    int arr[5];

    printf("Enter 5 integers: ");
    for (int i = 0; i < 5; i++)
    {
        if (scanf("%d", arr + i) != 1)
        {
            return 1;
        }
    }

    for (int i = 0; i < 5 - 1; i++)
    {
        for (int j = 0; j < 5 - i - 1; j++)
        {
            if (*(arr + j) > *(arr + j + 1))
            {
                int temp = *(arr + j);
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }
    }

    printf("Sorted: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d", *(arr + i));
        if (i < 4)
        {
            printf(" ");
        }
    }
    printf("\n");

    return 0;
}