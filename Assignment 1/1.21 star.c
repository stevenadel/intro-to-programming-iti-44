#include <stdio.h>

int main()
{
    int n;
    printf("Input number of levels (default 10): ");
    if (!scanf("%d", &n) || n <= 0)
    {
        printf("Please input a positive number.");
        return 1;
    }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == j)
            {
                printf("*");
            }
            else if (n - i + 1 == j)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}
