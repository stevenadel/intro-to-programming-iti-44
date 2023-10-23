#include <stdio.h>

int main()
{
    int n;
    printf("Input a number: ");
    if (!scanf("%d", &n) || n <= 0)
    {
        printf("Please input a positive number.");
        return 1;
    }

    int digits = 0;
    while (n > 0) {
        n = n / 10;
        digits++;
    }
    printf("Number of digits is %d\n", digits);
}
