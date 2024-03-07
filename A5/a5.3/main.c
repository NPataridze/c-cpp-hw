#include <stdio.h>

int count_lower(char *str)
{
    int count = 0;
    while (*str)
    {
        if (*str >= 'a' && *str <= 'z')
        {
            count++;
        }
        str++;
    }
    return count;
}
int main()
{
    char input[50];

    while (1)
    {
        printf("enter a string: ");
        fgets(input, sizeof(input), stdin);

        if (input[0] == '\n')
        {
            break;
        }
        int lowercase_count = count_lower(input);
        printf("number of lowercase characters: %d\n", lowercase_count);
    }
    return 0;
}