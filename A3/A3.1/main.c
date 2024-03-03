#include <stdio.h>

int main()
{

    float x;
    scanf("%f", &x);

    int n;
    scanf("%d", &n);

    while (n < 1)
    {
        printf("Input is invalid, reenter value\n");
        scanf("%d", &n);
    }

    for (int i = 1; i <= n; i++)
    {
        printf("%f\n", x);
    }

    return 0;
}