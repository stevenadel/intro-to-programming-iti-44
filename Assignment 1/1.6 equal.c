#include <stdio.h>

int main()
{
    int x,y;
    printf("Input first number: ");
    int scan = scanf("%d", &x);
    if (!1 == scan)
    {
        printf("Please input a number.");
        return 1;
    }

    printf("Input second number: ");
    scan = scanf("%d", &y);
    if (!1 == scan)
    {
        printf("Please input a number.");
        return 1;
    }

    if (x > y)
    {
        printf("Not equal.\n");
        printf("%d is bigger.\n", x);
    }
    else if (y > x)
    {
        printf("Not equal.\n");
        printf("%d is bigger.\n", y);
    }
    else
    {
        printf("The two numbers are equal.\n");
    }
}
