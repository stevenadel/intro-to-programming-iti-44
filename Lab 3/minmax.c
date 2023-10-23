#include<stdio.h>
#define SIZE 7

int main()
{
    int elements[SIZE] = {1,5,-1,3,7,8,9};
    int min = elements[0];
    int max = elements[0];

    for (int i = 0; i < SIZE; i++)
    {
        if (elements[i] < min)
        {
            min = elements[i];
        }
        else if (elements[i] > max)
        {
            max = elements[i];
        }
    }

    printf("Min: %d\n", min);
    printf("Max: %d\n", max);
}
