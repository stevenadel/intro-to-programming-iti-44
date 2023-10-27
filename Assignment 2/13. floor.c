#include <stdio.h>

int floor_of_sum(float x, float y);

int main()
{
    float x,y;
    printf("Input two floating numbers: ");
    if (2 != scanf("%f %f", &x, &y))
    {
        printf("Please input two numbers.\n");
        return 1;
    }

    printf("Floor of sum is %d", floor_of_sum(x, y));
}

int floor_of_sum(float x, float y)
{
    float sum = x + y;
    return sum / 1;
}
