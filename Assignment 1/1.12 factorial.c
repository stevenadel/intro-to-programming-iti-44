#include <stdio.h>

int main()
{
    int x;
    printf("Input a positive integer: ");
    if (1 != scanf("%d", &x) || x < 1)
    {
        printf("Please input a positive integer.\n");
        return 1;
    }

    int factorial = 1;
    for (int i = 1; i <= x; i++)
    {
        factorial *= i;
    }
    printf("Factorial of %d is %d\n", x, factorial);
}
