#include <stdio.h>

float sum(float num[], int x)
{
    float total;
    for (int i = 0; i <= x; i++)
    {
        total += num[i];
    }
    return total;
}

float average(float num[], int x)
{
    if (x == 0)
    {
        return 0.0;
    }
    return sum(num, x) / x;
}

int main()
{
    int x = 0;
    float num[10];
    float nums = 0.0;

    printf("enter numbers (terminate with -99.0):\n");

    int max = 10;
    int terminated = 0;

    while (x < max && !terminated)
    {
        scanf("%f", &nums);
        if (nums == -99.0)
        {
            terminated = 1;
        }
        else
        {
            num[x] = nums;
            x++;
        }
        if (x == max)
        {
            terminated = 1;
        }
    }

    printf("sum = %f\n", sum(num, x));
    printf("average = %f\n", average(num, x));

    return 0;
}
