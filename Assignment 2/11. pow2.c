#include <stdio.h>

int is_power_of_two(int n);

int main()
{
    int x;
    printf("Input number: ");
    if (1 != scanf("%d", &x) || x < 0)
    {
        printf("Please input a positive integer.\n");
        return 1;
    }

    if (is_power_of_two(x))
    {
        printf("%d is a power of 2.\n", x);
    }
    else
    {
        printf("%d is not a power of 2.\n", x);
    }
}

int is_power_of_two(int n)
{
    if (n == 0)
    {
        return 0;
    }

    while (n != 1)
    {
        if (n % 2 != 0)
        {
            return 0;
        }
        n = n / 2;
    }
    return 1;
}
