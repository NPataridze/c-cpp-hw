#include <stdio.h>

int position(char str[], char c)
{
    int idx;
    for (idx = 0; str[idx] != c && str[idx] != '\0'; ++idx)
    {
        continue;
    }
    if (str[idx] != c)
    {
        return 0;
    }
    return idx + 1;
}

int main()
{
    char line[80];
    while (1)
    {
        printf("Enter string:\n");
        fgets(line, sizeof(line), stdin);
        printf("The first occurence of 'g' is: %d\n", position(line, 'g'));
    }
}