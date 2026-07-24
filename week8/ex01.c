#include <stdio.h>

int main()
{
    int test = 0;
    int *ptr = &test;

    printf("The address of test variable is at: %p\n", (void *)ptr);

    return 0;
}