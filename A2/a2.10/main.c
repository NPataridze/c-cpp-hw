#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);

    while (n < 1)
    {
        scanf("%d", &n);
    }

    for (int i = 1; i <= n; i++)
    {
        printf("%d days = %d hours\n", i, 24 * i);
    }
    return 0;
}