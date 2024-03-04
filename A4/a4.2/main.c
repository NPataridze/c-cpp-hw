#include <stdio.h>
#include <string.h>

int main()
{
    char input[50];

    printf("Enter a string:\n");
    fgets(input, sizeof(input), stdin);

    // for (int i = 0; input[i] != '\0'; i++)
    for (int i = 0; i < strlen(input) - 1; i++)
    {
        if (i % 2 == 0)
        {
            printf("%c\n", input[i]);
        }
        else
        {
            printf(" %c\n", input[i]);
        }
    }
    return 0;
}