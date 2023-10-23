#include <stdio.h>

int calculate_heater_time(int temp);

int main()
{
    int x;
    printf("Input number: ");
    if (1 != scanf("%d", &x) || x < 0)
    {
        printf("Please input a positive integer.\n");
        return 1;
    }

    printf("Required heating time is %d mins.\n", calculate_heater_time(x));
}

int calculate_heater_time(int temp)
{
    if (temp <= 30)
    {
        return 7;
    }
    else if (temp <= 60)
    {
        return 5;
    }
    else if (temp <= 90)
    {
        return 3;
    }
    else if (temp > 90)
    {
        return 1;
    }
    else if (temp > 100)
    {
        return 0;
    }
}
