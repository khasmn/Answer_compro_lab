#include <stdio.h>

float calculateCircumference(float radius)
{
    return 2.0f * 3.14f * radius;
}

float calculateArea(float radius)
{
    return 3.14f * radius * radius;
}

int main()
{
    float radius;

    printf("Enter the radius in cm: ");
    if (scanf("%f", &radius) != 1)
    {
        return 1;
    }

    printf("Circumference: %.2f\n", calculateCircumference(radius));
    printf("Area: %.2f\n", calculateArea(radius));

    return 0;
}