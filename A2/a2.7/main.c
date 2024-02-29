#include <stdio.h>

int main()
{
    int i = 8;
    while (i >= 4)
    {
        i--;
        printf("i is %d\n", i + 1);
    }

    printf("That's it.\n");

    return 0;
}