#include <stdio.h>

void printTriangle(int n, char ch)
{
    int i, j;

    for (i = n; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%c", ch);
        }
        printf("\n");
    }
}

int main()
{
    int n;
    char ch;

    scanf("%d", &n);
    scanf(" %c", &ch);

    printTriangle(n, ch);

    return 0;
}