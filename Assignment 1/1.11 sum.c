#include <stdio.h>
#include <math.h>

int main()
{
    int sum = 0;
    for (int i = 1; i <= 100; i++)
    {
        sum += i;
    }
    printf("Sum of first 100 integers is %d", sum);
}
