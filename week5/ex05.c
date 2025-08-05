#include <stdio.h>

int main() {
    int values[8];
    int smallest, largest;

    for (int i = 0; i < 8; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &values[i]);
    }

    smallest = largest = values[0];

    for (int i = 1; i < 8; i++) {
        if (values[i] < smallest)
            smallest = values[i];
        if (values[i] > largest)
            largest = values[i];
    }

    printf("Smallest number: %d\n", smallest);
    printf("Largest number: %d\n", largest);

    return 0;
}
