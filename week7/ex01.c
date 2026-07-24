#include <stdio.h>



int main()
{
    struct Student {
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

    for (int i = 0; i < 3; i++)
    {
        printf("Student %d name is \"%s\", age %d.\n", i + 1, s[i].name, s[i].age);
    }

    return 0;
}