#include <stdio.h>

int main()
{

    double x, y;
    scanf("%lf", &x);
    scanf("%lf", &y);

    printf("sum of doubles = %lf\n", x + y);
    printf("difference of doubles= %lf\n", x - y);
    printf("square of a double = %lf\n", x * x);

    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);

    int sum = a + b;
    int product = a * b;

    printf("sum of integers = %d\n", sum);
    printf("product of integers = %d\n", product);

    char z, w;
    scanf(" %c", &z);
    scanf(" %c", &w);

    int sum_of_chars = z + w;
    int product_of_chars = z * w;

    printf("sum of chars = %d\n", sum_of_chars);
    printf("product of chars = %d\n", product_of_chars);
    printf("sum of chars = %c\n", sum_of_chars);
    printf("product of chars = %c\n", product_of_chars);

    return 0;
}