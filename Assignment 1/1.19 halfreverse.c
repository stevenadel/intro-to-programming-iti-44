#include <stdio.h>

int main()
{
    int n;
    printf("Input number of levels: ");
    if (!scanf("%d", &n) || n <= 0)
    {
        printf("Please input a positive number.");
        return 1;
    }

    for (int i = n; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
