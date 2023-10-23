#include <stdio.h>

int main()
{
    char string[150], cpystr[150];

    printf("Input a string: ");
    scanf("%[^\n]s", string);

    int i = 0;
    while ('\0' != string[i])
    {
        cpystr[i] = string[i];
        i++;
    }
    cpystr[i] = '\0';

    printf("%s\n", cpystr);
}
