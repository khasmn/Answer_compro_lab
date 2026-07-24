#include <stdio.h>

struct Student {
    char name[50];
    float grade;
};

float calculateAverage(const struct Student students[], int n)
{
    float total = 0.0f;
    for (int i = 0; i < n; i++)
    {
        total += students[i].grade;
    }
    return total / (float)n;
}

float findHighest(const struct Student students[], int n)
{
    float max = students[0].grade;
    for (int i = 1; i < n; i++)
    {
        if (students[i].grade > max)
        {
            max = students[i].grade;
        }
    }
    return max;
}

float findLowest(const struct Student students[], int n)
{
    float min = students[0].grade;
    for (int i = 1; i < n; i++)
    {
        if (students[i].grade < min)
        {
            min = students[i].grade;
        }
    }
    return min;
}

void printPassedStudents(const struct Student students[], int n)
{
    printf("Students who passed:\n");
    for (int i = 0; i < n; i++)
    {
        if (students[i].grade >= 60.0f)
        {
            printf("%s\n", students[i].name);
        }
    }
}

int main(void)
{
    int n;

    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student students[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter name of student %d: ", i + 1);
        scanf("%49s", students[i].name);
        printf("Enter grade of %s: ", students[i].name);
        scanf("%f", &students[i].grade);
    }

    printf("Results\n");
    printf("Average grade: %.2f\n", calculateAverage(students, n));
    printf("Highest grade: %.0f\n", findHighest(students, n));
    printf("Lowest grade: %.0f\n", findLowest(students, n));
    printPassedStudents(students, n);

    return 0;
}