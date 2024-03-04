#include <stdio.h>

float to_pounds(int kg, int g)
{
    float kg_to_pound = kg * 2.2;
    float g_to_pound = g * 2.2 / 1000.f;
    float total_pound = kg_to_pound + g_to_pound;

    return total_pound;
}

int main()
{
    int kg, g;
    printf("enter the weight of the item in kilograms + grams:\n");
    scanf("%d%d", &kg, &g);

    float pounds = to_pounds(kg, g);
    printf("Result of conversion: %f", pounds);

    return 0;
}
