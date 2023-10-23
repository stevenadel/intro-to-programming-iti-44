#include <stdio.h>
void calculate(int x, int y, char mode);

void main()
{
    calculate(10, 5, '+');
    calculate(10, 5, '-');
    calculate(10, 5, '*');
    calculate(10, 5, '/');
}

void calculate(int x, int y, char mode)
{
    switch (mode)
    {
        case '+':
            printf("%d\n", x + y);
            break;
        case '-':
            printf("%d\n", x - y);
            break;
        case '*':
            printf("%d\n", x * y);
            break;
        case '/':
            printf("%d\n", x / y);
    }
}