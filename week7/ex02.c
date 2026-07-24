#include <stdio.h>

int main()
{
    struct Student 
    {
    char name[100];
    int age;
    float score;
    };

    struct Student s[3];

    for (int i = 0; i < 3; i++)
    {
        printf("Student %d's name: ", i + 1);
        scanf(" %[^\n]", s[i].name);
        printf("Student %d's age: ", i + 1);
        scanf("%d", &s[i].age);
        printf("Student %d's score: ", i + 1);
        scanf("%f", &s[i].score);
    }

    int highest_idx = 0;
    for (int i = 1; i < 3; i++)
    {
        if (s[i].score > s[highest_idx].score)
        {
            highest_idx = i;
        }
    }

    printf("The highest scores belongs to %s at %.1f scores!\n", s[highest_idx].name, s[highest_idx].score);

    return 0;
}