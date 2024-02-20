#include <stdio.h>

int main()
{
    int x = 17, y = 4;
    printf("x=%d\ny=%d\n", x, y);

    printf("sum=%d\n", x + y);
    printf("product=%d\n", x * y);
    printf("difference=%d\n", x - y);

    float division = (float)x / y;
    printf("division=%f\n", division);

    printf("remainder of division=%d\n", x % y);

    return 0;
}