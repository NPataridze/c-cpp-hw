#include <stdio.h>

double sum25(double v[], int n)
{
    if (n >= 6)
    {
        return v[2] + v[5];
    }
    else
    {
        printf("positions 2 and 5 are invalid");
        return -111.0;
    }
}

int main()
{
    int n;
    scanf("%d", &n);

    double arr[20];

    if (n <= 0 || n > 20)
    {
        return 1;
    }

    printf("enter double values:\n");

    for (int i = 0; i < n; i++)
    {
        scanf("%lf", &arr[i]);
    }

    double result = sum25(arr, n);

    if (result != -111.0)
    {
        printf("sum=%lf\n", result);
    }

    return 0;
}