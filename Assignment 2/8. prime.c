#include <stdio.h>

int isPrime(int n);

int main()
{
    int x,y;
    printf("Input first integer: ");
    if (1 != scanf("%d", &x) || x < 1)
    {
        printf("Please input a positive integer.\n");
        return 1;
    }

    printf("Input second integer: ");
    if (1 != scanf("%d", &y) || y < 1 || x > y)
    {
        printf("Please input a positive integer bigger than first one.\n");
        return 1;
    }

    printf("Prime numbers: ");
    for (int i = x; i < y; i++)
    {
        if (isPrime(i))
        {
            printf("%d ", i);
        }
    }
}

int isPrime(int n){

    for (int i = 2; i * i <= n; i++)
    {

        if (0 == n % i)
        {
            return 0;
        }
    }
    return 1;
}
