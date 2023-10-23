#include <stdio.h>
void add(int x, int y);

void main()
{
    add(2, 5);
}

void add(int x, int y)
{
    printf("%d\n", x + y);
}