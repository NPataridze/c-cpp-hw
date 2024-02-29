#include <stdio.h>

int main()
{

    int a;
    scanf("%d", &a);
    printf("value of a: %d\n", a);

    int *ptr_a;
    ptr_a = &a;

    printf("adress of a: %p\n", ptr_a);
    printf("modified value of a: %d\n", *ptr_a + 5);
    printf("adress of the modified a: %p\n", ptr_a + 5);

    return 0;
}