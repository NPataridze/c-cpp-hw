#include <stdio.h>

int main()
{
    float a, b, h;
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &h);

    float square, rectangle, triangle, trapezoid;
    square = a * a;
    rectangle = a * b;
    triangle = (a * h) / 2;
    trapezoid = h * (a + b) / 2;

    printf("square area = %lf\n", square);
    printf("rectangle area = %lf\n", rectangle);
    printf("triangle area = %lf\n", triangle);
    printf("trapezoid area = %lf\n", trapezoid);

    return 0;
}