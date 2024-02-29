#include <stdio.h>

int main()
{

    double x, y;
    scanf("%lf", &x);
    scanf("%lf", &y);

    double *ptr_one;
    ptr_one = &x;
    double *ptr_two;
    ptr_two = &x;
    double *ptr_three;
    ptr_three = &y;

    printf("first adress: %p\n", ptr_one);
    printf("second adress: %p\n", ptr_two);
    printf("third adress: %p\n", ptr_three);

    return 0;
}