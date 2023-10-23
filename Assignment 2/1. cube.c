#include <stdio.h>

int main()
{
    int num;
    printf("Input a number: ");
    if (!scanf("%d", &num))
    {
        printf("Please input a number.");
        return 1;
    }

    printf("Cube of %d is %d", num, num*num*num);
}
