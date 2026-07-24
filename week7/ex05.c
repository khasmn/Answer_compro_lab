#include <stdio.h>



int main()
{
    struct Time 
    {
    int minute;
    int seconds;
    };

    struct Time t[3];
    int total_seconds = 0;

    for (int i = 0; i < 3; i++)
    {
        printf("Time input (m:s): ");
        scanf("%d:%d", &t[i].minute, &t[i].seconds);
        total_seconds += (t[i].minute * 60) + t[i].seconds;
    }

    printf("Total time elasped: %d second(s)\n", total_seconds);

    return 0;
}