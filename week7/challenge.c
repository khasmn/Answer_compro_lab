#include <stdio.h>

int main()
{
    struct Student 
    {
    char name[21];
    int id;
    float grades[4];
    float average;
    };

    struct Student students[3];
    const char *subject_names[4] = {"Math", "English", "Science", "History"};
    float subject_sums[4] = {0.0f, 0.0f, 0.0f, 0.0f};

    for (int i = 0; i < 3; i++)
    {
        printf("Enter name, ID, and 4 grades for student %d:\n", i + 1);
        if (scanf("%20s %d %f %f %f %f",
                  students[i].name,
                  &students[i].id,
                  &students[i].grades[0],
                  &students[i].grades[1],
                  &students[i].grades[2],
                  &students[i].grades[3]) != 6)
        {
            return 1;
        }

        float sum = 0.0f;
        for (int j = 0; j < 4; j++)
        {
            sum += students[i].grades[j];
            subject_sums[j] += students[i].grades[j];
        }
        students[i].average = sum / 4.0f;
    }

    printf("\nStudent Averages:\n");
    int top_student_idx = 0;
    for (int i = 0; i < 3; i++)
    {
        printf("%s (ID: %d): %.2f\n", students[i].name, students[i].id, students[i].average);
        if (students[i].average > students[top_student_idx].average)
        {
            top_student_idx = i;
        }
    }

    printf("\nTop Student: %s with %.2f\n\n", students[top_student_idx].name, students[top_student_idx].average);

    printf("Subject Averages:\n");
    int top_subject_idx = 0;
    float subject_averages[4];

    for (int j = 0; j < 4; j++)
    {
        subject_averages[j] = subject_sums[j] / 3.0f;
        printf("%s: %.2f\n", subject_names[j], subject_averages[j]);

        if (subject_averages[j] > subject_averages[top_subject_idx])
        {
            top_subject_idx = j;
        }
    }

    printf("\nTop Subject: %s with average %.2f\n", subject_names[top_subject_idx], subject_averages[top_subject_idx]);

    return 0;
}