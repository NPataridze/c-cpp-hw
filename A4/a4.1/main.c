#include <stdio.h>
#include <math.h>

int main()
{
    double low, up, step;

    printf("Enter lower limit:\n");
    scanf("%lf", &low);

    printf("Enter upper limit:\n");
    scanf("%lf", &up);

    printf("Enter step size:\n");
    scanf("%lf", &step);

    for (double radius = low; radius <= up; radius += step)
    {
        double area = M_PI * radius * radius;
        double perimeter = 2 * M_PI * radius;

        printf("%lf     %lf     %lf\n", radius, area, perimeter);
    }
    return 0;
}