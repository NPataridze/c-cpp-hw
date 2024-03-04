#include <stdio.h>

void print_form(int n, int m, char c)
{
    for (int row = 1; row <= n; row++)
    {
        for (int column = 1; column <= m; column++)
        {
            printf("%c", c);
        }
        printf("\n");
        m++;
    }
}

int main()
{
    int n, m;
    char c;

    printf("enter height:\n");
    scanf("%d", &n);

    printf("enter base:\n");
    scanf("%d", &m);

    printf("enter character:\n");
    scanf(" %c", &c);

    print_form(n, m, c);

    return 0;
}