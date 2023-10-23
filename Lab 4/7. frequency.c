#include <stdio.h>

int main()
{
    char string[200], chr;

    printf("Input a string: ");
    scanf("%[^\n]s", string);

    printf("Input character to find frequency: ");
    scanf(" %c", &chr);

    int i = 0, count = 0;
    while ('\0' != string[i])
    {
        if (chr == string[i])
        {
            count++;
        }
        i++;
    }

    printf("Frequency of %c = %d\n", chr, count);
}
