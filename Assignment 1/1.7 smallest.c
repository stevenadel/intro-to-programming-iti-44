#include <stdio.h>

int main()
{
    int x,y,z;
    printf("Input three numbers: ");
    if (3 != scanf("%d %d %d", &x, &y, &z))
    {
        printf("Please input three numbers.\n");
        return 1;
    }

    int smallest = x;
    if (smallest > y)
    {
        smallest = y;
    }
    if (smallest > z)
    {
        smallest = z;
    }

    printf("Smallest number is %d\n", smallest);
}

