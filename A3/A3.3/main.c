#include <stdio.h>

float convert(int cm)
{
    float km = cm * 0.00001;
    return km;
}

int main()
{
    int cm;
    scanf("%d", &cm);

    if (cm < 0)
    {
        printf("enter a non-negative value.\n");
    }
    else
    {
        float km = convert(cm);
        printf("Result of conversion: %lf\n", km);
    }

    return 0;
}