#include <stdio.h>

int main()
{

    int weeks, days, hours;

    printf("enter weeks:\n");
    scanf("%d", &weeks);

    printf("enter days:\n");
    scanf("%d", &days);

    printf("enter hours:\n");
    scanf("%d", &hours);

    int total_hours = weeks * 7 * 24 + days * 24 + hours;
    printf("total hours: %d\n", total_hours);

    return 0;
}