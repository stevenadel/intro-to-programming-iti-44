#include <stdio.h>

int main()
{
    int n;
    printf("Input a number: ");
    if (!scanf("%d", &n) || n < 0)
    {
        printf("Please input a positive number.");
        return 1;
    }

    int reverse = 0;
    while (n > 0) {
        reverse = reverse * 10 + n % 10;
        n = n / 10;
    }
    printf("Reverse is %d\n", reverse);
}
