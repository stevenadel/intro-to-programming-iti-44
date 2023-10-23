#include <stdio.h>
void largest(int x, int y, int z);

void main()
{
    largest(12, 5, 7);
}

void largest(int x, int y, int z)
{
    if (x > y)
    {
        if (x > z)
        {
            printf("%d\n", x);
        } 
        else
        {
            printf("%d\n", z);
        }
    }
    else
    {
        if (y > z)
        {
            printf("%d\n", y);
        } 
        else
        {
            printf("%d\n", z);
        }
    }
}