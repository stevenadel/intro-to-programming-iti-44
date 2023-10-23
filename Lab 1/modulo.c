#include <stdio.h>
void modulo(int x, int y);

void main()
{
    modulo(10, 3);
}

void modulo(int x, int y)
{
    printf("Quotient: %d\n", x / y);
    printf("Remainder: %d\n", x % y);
}