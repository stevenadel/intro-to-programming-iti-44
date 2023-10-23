#include <stdio.h>
#define ENTER 13

int main()
{
    printf("Enter each character: ");
    char input = getch();

    char string[100];
    int counter = 0;
    while (ENTER != input)
    {
        string[counter] = input;
        counter++;
        input = getch();
    }

    string[counter+1] = '\0';
    printf("\n%s", string);
}
