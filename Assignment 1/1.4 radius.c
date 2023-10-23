#include <stdio.h>
#include <math.h>

int main()
{
    float radius;
    printf("Input radius: ");
    int scan = scanf("%f", &radius);

    if (!1 == scan)
    {
        printf("Please input a circle radius.\n");
        return 1;
    }

    double area = M_PI * (radius * radius);
    double circumference = 2 * M_PI * radius;
    printf("Area = %f\n", area);
    printf("Circumference = %f\n", circumference);
}
