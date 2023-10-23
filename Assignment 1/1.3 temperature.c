#include <stdio.h>
#include <stdlib.h>

int main()
{
    float celsius;
    printf("Input temperature in celsius: ");
    int scan = scanf("%f", &celsius);

    if (!1 == scan)
    {
        printf("Please input a temperature in celsius.");
        return 1;
    }

    float fahrenheit = (celsius * 1.8) + 32;
    printf("Temperature in fahrenheit is %.2f", fahrenheit);
}
