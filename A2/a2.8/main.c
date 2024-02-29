#include <stdio.h>

int main()
{
    int x;
    scanf("%d", &x);

    if ((x % 2 == 0) && (x % 7 == 0))
    {
        printf("The number is divisible by 2 and 7");
    }
    else
    {
        printf("The number is NOT divisible by 2 and 7");
    }
}