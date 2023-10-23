#include <stdio.h>

int main()
{
    int base,exp;
    printf("Input a number: ");
    if (!scanf("%d", &base))
    {
        printf("Please input a number.");
        return 1;
    }

    printf("Input exponent (to power of): ");
    if (!scanf("%d", &exp) || exp < 0)
    {
        printf("Please input a positive exponent.");
        return 1;
    }

    int result = 1;
    for (int i = 1; i <= exp; i++)
    {
        result *= base;
    }

    printf("Result is %d", result);
}
