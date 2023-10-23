#include <stdio.h>

int main()
{
    int x,y;
    printf("Input two numbers: ");
    if (2 != scanf("%d %d", &x, &y))
    {
        printf("Please input two numbers.\n");
        return 1;
    }

    int swap;
    swap = x;
    x = y;
    y = swap;

    printf("first: %d, second: %d", x, y);
}

