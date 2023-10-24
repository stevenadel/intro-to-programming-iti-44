#include <stdio.h>
#include <stdlib.h>

void swap1(int* x, int* y);

int main()
{
    int x, y;
    printf("Input two numbers: ");
    if (2 != scanf("%d %d", &x, &y))
    {
        printf("Please input two numbers.\n");
        return 1;
    }

    printf("Before swapping, x=%d y=%d\n", x, y);
    swap3(&x, &y);
    printf("After swapping, x=%d y=%d\n", x, y);
}

void swap1(int* x, int* y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void swap2(int* x, int* y)
{
    *x = *x + *y;
    *y = *x - *y;
    *x = *x - *y;
}

void swap3(int* x, int* y)
{
    *x = *x * *y;
    *y = *x / *y;
    *x = *x / *y;
}
