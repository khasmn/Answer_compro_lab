#include <stdio.h>

int main() {
    int values[10];
    int evenCount = 0, oddCount = 0;

    for (int i = 0; i < 10; i++) {
        printf("Enter value %d: ", i + 1);
        scanf("%d", &values[i]);

        if (values[i] % 2 == 0)
            evenCount++;
        else
            oddCount++;
    }

    printf("Even numbers: %d\n", evenCount);
    printf("Odd numbers: %d\n", oddCount);

    return 0;
}
