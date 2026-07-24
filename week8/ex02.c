#include <stdio.h>

int main()
{
    int a = 0;
    int b = 5;

    printf("Before reverse: a=%d b=%d\n", a, b);

    int *ptr_a = &a;
    int *ptr_b = &b;

    int temp = *ptr_a;
    *ptr_a = *ptr_b;
    *ptr_b = temp;

    printf("After reverse: a=%d, b=%d\n", a, b);

    return 0;
}