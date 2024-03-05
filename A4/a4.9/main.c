#include <stdio.h>
#include <stdlib.h>

int prodminmax(int arr[], int n)
{
    int max = arr[0];
    int min = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    int product = min * max;
    return product;
}

int main()
{
    int n;

    printf("enter the number of integers greater than zero:\n");
    scanf("%d", &n);

    if (n <= 0)
    {
        return 1;
    }

    int *arr = (int *)malloc(n * sizeof(int));

    if (arr == NULL)
    {
        return 1;
    }

    printf("enter %d integers:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int result = prodminmax(arr, n);
    printf("product of the smallest and largest integers in the list = %d\n", result);

    free(arr);

    return 0;
}