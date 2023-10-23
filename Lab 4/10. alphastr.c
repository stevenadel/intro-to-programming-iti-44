#include <stdio.h>

int main()
{
    char string[150], newstr[150];

    printf("Input a string: ");
    scanf("%[^\n]s", string);

    int i = 0, j = 0;
    char oldchar;
    while ('\0' != string[i])
    {
        oldchar = string[i];
        if ((oldchar >= 65 && oldchar <= 90) ||
            (oldchar >= 97 && oldchar <= 122))
        {
            newstr[j] = oldchar;
            j++;
        }
        i++;
    }
    newstr[j] = '\0';

    printf("%s\n", newstr);
}
