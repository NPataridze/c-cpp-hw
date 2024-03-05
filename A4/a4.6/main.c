#include <stdio.h>
#include <stdlib.h>

void two_maxs(int *arr, int n)
{
    int first_max = arr[0];
    int second_max = arr[1];

    if (first_max < second_max)
    {
        first_max = arr[1];
        second_max = arr[0];
    }

    for (int i = 2; i < n; i++)
    {
        if (arr[i] > first_max)
        {
            second_max = first_max;
            first_max = arr[i];
        }
        else if (arr[i] > second_max && arr[i] != first_max)
        {
            second_max = arr[i];
        }
    }
    printf("two greatest values are: %d and %d\n", first_max, second_max);
}

int main()
{
    int n;

    printf("enter the number of elements:\n");
    scanf("%d", &n);

    if (n <= 1)
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

    two_maxs(arr, n);

    free(arr);

    return 0;
}