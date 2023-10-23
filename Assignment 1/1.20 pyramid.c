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

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++)
        {

            printf(" ");
        }

        for (int k = 1; k <= 2 * i - 1; k++) {
            printf("*");
        }
        printf("\n");
    }
}
