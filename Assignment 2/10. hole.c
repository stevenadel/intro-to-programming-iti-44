#include <stdio.h>

int count_holes(int number);

int main()
{
    int x;
    printf("Input number: ");
    if (1 != scanf("%d", &x) || x < 0)
    {
        printf("Please input a positive integer.\n");
        return 1;
    }

    printf("This number has %d holes.\n", count_holes(x));
}

int count_holes(int number)
{
    if (0 == number)
    {
        return 1;
    }

    int digit = 0, holes = 0;
    while (number > 0)
    {
        digit = number % 10;
        switch (digit)
        {
            case 0:
            case 4:
            case 6:
            case 9:
                holes++;
                break;
            case 8:
                holes += 2;
                break;
        }
        number = number / 10;
    }
    return holes;
}
