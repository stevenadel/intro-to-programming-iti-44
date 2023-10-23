#include <stdio.h>
#include <math.h>

int main()
{
    int x;
    printf("Input a positive integer: ");
    if (1 != scanf("%d", &x) || x < 1)
    {
        printf("Please input a positive integer.\n");
        return 1;
    }

    double sqrt_x = sqrt(x);
    if (sqrt_x * sqrt_x == x)
    {
        printf("Number %d is a perfect square\n", x);
    }
    else
    {
        printf("Number %d is not a perfect square\n", x);
    }
}

