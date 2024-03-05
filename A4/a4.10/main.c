#include <stdio.h>
#include <math.h>

void proddivpowinv(float a, float b, float *prod, float *div, float *pwr, float *invb)
{

    *prod = a * b;
    *div = a / b;
    *pwr = pow(a, b);
    *invb = 1 / b;
}

int main()
{
    float a, b;
    scanf("%f %f", &a, &b);

    float prod, div, pow, invb;

    proddivpowinv(a, b, &prod, &div, &pow, &invb);

    printf("Product: %f\n", prod);
    printf("Division: %f\n", div);
    printf("Power: %f\n", pow);
    printf("Inverse b: %f\n", invb);

    return 0;
}