#include <stdio.h>
#include <stdlib.h>

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

    int sum = x + y;
    int result = (sum * 3) - 10;
    printf("Equation result is %d", result);
}
