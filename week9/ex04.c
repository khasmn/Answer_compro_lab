#include <stdio.h>

int countVowels(const char *str)
{
    int count = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        char ch = str[i];
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        {
            count++;
        }
    }
    return count;
}

int main(void)
{
    char str[100];

    printf("Input: ");
    if (fgets(str, sizeof(str), stdin) != NULL)
    {
        printf("Output: Number of vowels: %d\n", countVowels(str));
    }

    return 0;
}