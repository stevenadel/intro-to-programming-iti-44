#include <stdio.h>

int main()
{
    char input;

    printf("Input a character: ");
    scanf("%c", &input);

    if ((input >= 65 && input <= 90) ||
        (input >= 97 && input <= 122))
    {
        printf("Character %c is in the alphabet.\n", input);
    }
    else
    {
        printf("Not alphabet.\n");

    }
}
