#include <stdio.h>

int main() {
    int original[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(original) / sizeof(original[0]);

    for (int i = 0; i < n / 2; i++) {
        int temp = original[i];
        original[i] = original[n - 1 - i];
        original[n - 1 - i] = temp;
    }

    printf("Reversed array: ");
    for (int i = 0; i < n; i++) {
        printf("%d", original[i]);
        if (i < n - 1) {
            printf(", ");
        }
    }

    printf("\n");
    return 0;
}
