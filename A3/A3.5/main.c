#include <stdio.h>

double celsiustofahrenheit(double celsius)
{
    return (celsius * 9 / 5) + 32;
}

int main()
{
    char c;
    printf("enter a character, start with: 'p', 's', or 't'.\n");
    scanf(" %c", &c);

    int n;
    printf("enter the number of temperatures\n");
    scanf("%d", &n);

    double temp[100];

    switch (c)
    {
    case 's':
    {
        if (n <= 0 || n > 100)
        {
            printf("enter a number of temperatures between 1 and 100\n");
            return 1;
        }

        printf("enter %d celsius temperatures:\n", n);

        for (int i = 0; i < n; i++)
        {
            scanf("%lf", &temp[i]);
        }
        double sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += temp[i];
        }
        printf("Sum = %f celsius\n", sum);
        break;
    }
    case 'p':
    {
        printf("enter %d celsius temperatures:\n", n);
        for (int i = 0; i < n; i++)
        {
            scanf("%lf", &temp[i]);
        }
        printf("list of temperatures in celsius:\n");
        for (int i = 0; i < n; i++)
        {
            printf("%f\n", temp[i]);
        }
        printf("\n");
        break;
    }
    case 't':
    {
        printf("enter %d celsius temperatures:\n", n);
        for (int i = 0; i < n; i++)
        {
            scanf("%lf", &temp[i]);
        }
        printf("list of temperatures in fahrenheit:\n");
        for (int i = 0; i < n; i++)
        {
            double fahrenheit = celsiustofahrenheit(temp[i]);
            printf("%f\n", fahrenheit);
        }
        printf("\n");
        break;
    }
    default:
    {
        printf("wrong entry, start with: 'p', 's', or 't'.\n");
        return 1;
    }
    }
    return 0;
}