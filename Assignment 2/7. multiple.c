#include <stdio.h>

int main()
{
    int x,y;
    printf("Input first number: ");
    if (!scanf("%d", &x))
    {
        printf("Please input a number.\n");
        return 1;
    }

    printf("Input second number: ");
    if (!scanf("%d", &y))
    {
        printf("Please input a number.\n");
        return 1;
    }

    if (x % y == 0)
    {
        printf("%d is a multiple of %d.\n", x, y);
    }
    else
    {
        printf("%d is not a multiple of %d.\n", x, y);
    }
}
