#include <stdio.h>

float product(float a, float b)
{
    return a * b;
}

void productbyref(float a, float b, float *p)
{
    *p = a * b;
}

void modifybyref(float *a, float *b)
{
    *a += 3;
    *b += 11;
}

int main()
{
    float a, b;
    scanf("%f %f", &a, &b);

    float prod = product(a, b);
    printf("product: %f\n", prod);

    float result;
    productbyref(a, b, &result);
    printf("product by reference = %lf\n", result);

    modifybyref(&a, &b);
    printf("a = %f(modified)\nb = %f(modified)\n", a, b);

    return 0;
}