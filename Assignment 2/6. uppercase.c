#include <stdio.h>

int main()
{
    char string[150], newstr[150];

    printf("Input a string: ");
    scanf("%[^\n]s", string);

    int i = 0;
    while ('\0' != string[i])
    {
        if (string[i] >= 97 && string[i] <= 122)
        {
            newstr[i] = string[i] - 32;
        }
        else
        {
            newstr[i] = string[i];
        }
        i++;
    }
    newstr[i] = '\0';

    printf("%s\n", newstr);
}
