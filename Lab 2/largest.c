#include <stdio.h>
void largest(int x, int y, int z);

int main()
{
    int x,y,z;
    printf("Input three numbers: ");
    int proper_input = scanf("%d %d %d", &x, &y, &z);

    if (!proper_input) {
        printf("Please insert only three numbers.\n");
        return 1;
    }

    largest(x, y, z);
}

void largest(int x, int y, int z)
{
    if (x > y && x > z)
    {
        printf("%d\n", x);

    }
    else if (y > x && y > z)
    {
        printf("%d\n", y);
    } 
    else
    {
        printf("%d\n", z);
    }
}