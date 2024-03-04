#include <stdio.h>
#include <string.h>

int main()
{
    char a[100], b[100];

    fgets(a, sizeof(a), stdin);
    fgets(b, sizeof(b), stdin);

    a[strlen(a) - 1] = '\0';
    b[strlen(b) - 1] = '\0';

    ;
    int len_a = strlen(a);
    int len_b = strlen(b);

    printf("length1=%zu\n", strlen(a));
    printf("length2=%zu\n", strlen(b));

    char ab[100];
    strcpy(ab, strcat(a, b));
    printf("concatenation=%s\n", ab);

    char copy[100];
    strcpy(copy, b);
    printf("copy=%s\n", copy);

    if (len_a < len_b)
    {
        printf("one is smaller than two\n");
    }
    else if (len_a > len_b)
    {
        printf("one is larger than two\n");
    }
    else
    {
        printf("one is equal to two\n");
    }

    char c;
    printf("input char: ");
    scanf(" %c", &c);
    int location = -1;
    for (int i = 0; i < len_a + len_b; i++)
    {
        if (ab[i] == c)
        {
            location = i;
            break;
        }
    }
    if (location == -1)
    {
        puts("char is not in the string");
    }
    else
    {
        printf("position of %c is %d", c, location);
    }

    // char *p = strchr(strcat(a, b), c);
    // if (p != NULL)
    // {
    //     int position = p - strcat(a, b);
    //     printf("position=%d\n", position + 1);
    // }
    // else
    // {
    //     printf("The character is not in the string");
    // }
}
