#include <stdio.h>

int main() {
    int n, i = 0, num, target, count = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d integers:\n", n);
    while (i < n) {
        scanf("%d", &num);
        i++;
    }

    printf("Enter number to count: ");
    scanf("%d", &target);

    i = 0;
    printf("Enter the same %d integers again:\n", n);
    while (i < n) {
        scanf("%d", &num);
        if (num == target) {
            count++;
        }
        i++;
    }

    printf("Number %d occurs %d times\n", target, count);

    return 0;
}
