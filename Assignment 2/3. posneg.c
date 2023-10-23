#include <stdio.h>

int main()
{
    int n;
    printf("Input a number: ");
    if (!scanf("%d", &n))
    {
        printf("Please input a number.\n");
    }

    if (n > 0)
    {
        printf("Number is positive.\n");
    }
    else if (n < 0)
    {
        printf("Number is negative.\n");
    }
    else
    {
        printf("Number is zero.\n");
    }
}
