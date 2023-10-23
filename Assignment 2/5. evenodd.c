#include <stdio.h>

int main()
{
    int num;
    printf("Input a number: ");
    if (!scanf("%d", &num))
    {
        printf("Please input a number.\n");
        return 1;
    }

    if (num % 2 == 0)
    {
        printf("Number is even.\n");
    }
    else
    {
        printf("Number is odd.\n");
    }
}
