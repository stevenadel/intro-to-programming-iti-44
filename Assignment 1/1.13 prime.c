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

    if (1 == x || (x % 2 == 0 && x != 2))
    {
        printf("Not prime.\n");
        return 0;
    }

    for (int i = 2; i <= x/2; i++)
    {
        if (x % i == 0)
        {
            printf("Not prime.\n");
            return 0;
        }
    }

    printf("Number is prime.\n");
}
