#include <stdio.h>
#include <stdlib.h>

void divby5(float arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] /= 5;
    }
}
int main()
{
    int n;
    scanf("%d", &n);

    float *arr = (float *)malloc(n * sizeof(float));
    if(arr == NULL){
        return 1;
    }

    for(int i = 0; i < n; i++){
        scanf("%f", &arr[i]);
    }

    divby5(arr, n);

    for (int i = 0; i < n; i++)
    {
        printf(" %.3f", arr[i]);
    }
    printf("\n");


    free(arr);

    return 0;
}