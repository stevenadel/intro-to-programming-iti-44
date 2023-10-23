#include <stdio.h>

int main()
{
    char character;
    printf("Input char: ");
    int scan = scanf("%c", &character);

    printf("ASCII value for %c is %d", character, character);
}
