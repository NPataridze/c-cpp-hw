#include <stdio.h>

int main()
{
    char ch;

    printf("enter a lowercase charachter\n");
    scanf(" %c", &ch);

    int n;
    scanf("%d", &n);

    if (ch >= 'a' && ch <= 'z')
    {
        for (int i = 0; i <= n; i++)
        {
            printf("%c\n", ch - i);
        }
    }
    else
    {
        printf("enter a lowercase charachter\n");
    }

    return 0;
}