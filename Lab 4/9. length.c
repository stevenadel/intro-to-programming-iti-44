#include <stdio.h>

int main()
{
    char string[150];

    printf("Input a string: ");
    scanf("%[^\n]s", string);

    int length = 0;
    while ('\0' != string[length])
    {
        length++;
    }
    length++; // strlen() considers terminator part of length

    printf("The string is %d characters long (with terminator).\n", length);
}
