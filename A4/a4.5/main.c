#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int consonant(char c)
{
    c = tolower(c);

    if (c >= 'a' && c <= 'z' && c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int count_consonants(char str[])
{
    int count;
    char *ptr = str;

    while (*ptr != '\0')
    {
        if (consonant(*ptr))
        {
            count++;
        }
        ptr++;
    }
    return count;
}

int main()
{
    char input[100];

    while (1)
    {
        printf("enter string:\n");
        fgets(input, sizeof(input), stdin);

        input[strlen(input) - 1] = '\0';

        if (strlen(input) == 0)
        {
            break;
        }

        int consonant_count = count_consonants(input);
        printf("Number of consonants = %d\n", consonant_count);
    }

    return 0;
}