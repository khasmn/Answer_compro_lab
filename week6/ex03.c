#include <stdio.h>

int main(void)
{
    int marks[5];
    int total = 0;
    int highest = 0;

    for (int i = 0; i < 5; i++)
    {
        printf("Enter the marks of student %d: ", i + 1);
        scanf("%d", &marks[i]);

        total += marks[i];

        if (i == 0 || marks[i] > highest)
        {
            highest = marks[i];
        }
    }

    printf("Total Marks: %d\n", total);
    printf("Highest Marks: %d\n", highest);

    return 0;
}