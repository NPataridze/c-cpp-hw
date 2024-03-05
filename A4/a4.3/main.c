#include <stdio.h>
#include <math.h>

float geometric_mean(float arr[], int num)
{
    float product = 1;
    for (int i = 0; i < num; i++)
    {
        product = product * arr[i];
    }
    float gm = pow(product, (float)1 / num);
    return gm;
}

float find_highest(float arr[], int num)
{
    float highest = arr[0];
    for (int i = 1; i < num; i++)
    {
        if (arr[i] > highest)
        {
            highest = arr[i];
        }
    }
    return highest;
}

float find_lowest(float arr[], int num)
{
    float lowest = arr[0];
    for (int i = 1; i < num; i++)
    {
        if (arr[i] < lowest)
        {
            lowest = arr[i];
        }
    }
    return lowest;
}

float calculate_sum(float arr[], int num)
{
    float sum;
    for (int i = 0; i < num; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int main()
{
    float arr[15];
    int num = 0;
    char choice;

    printf("Enter up to 15 floats:\n");

    while (num < 15)
    {
        float input;
        scanf("%f", &input);

        if (input < 0)
        {
            break;
        }

        arr[num] = input;
        num++;
    }
    if (num == 0)
    {
        printf("no valid numbers were entered.\n");
        return 1;
    }

    printf("Enter m for geometric mean, h for highest, l for lowest, s for sum:\n");
    scanf(" %c", &choice);

    switch (choice)
    {
    case 'm':
        printf("Geometric mean = %f\n", geometric_mean(arr, num));
        break;
    case 'h':
        printf("Highest number = %f\n", find_highest(arr, num));
        break;
    case 'l':
        printf("Lowest number = %f\n", find_lowest(arr, num));
        break;
    case 's':
        printf("Sum = %f\n", calculate_sum(arr, num));
        break;
    default:
        printf("Invalid Choice.\n");
        break;
    }
    return 0;
}