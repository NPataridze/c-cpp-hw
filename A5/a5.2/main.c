#include <stdio.h>

void divby5(float arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] /= 5;
    }
}
int main()
{
    float arr[] = {5.5, 6.5, 7.75, 8.0, 9.6, 10.36};
    int size = sizeof(arr) / sizeof(arr[0]);

    divby5(arr, size);

    for (int i = 0; i < size; i++)
    {
        printf(" %.3f", arr[i]);
    }

    printf("\n");

    return 0;
}