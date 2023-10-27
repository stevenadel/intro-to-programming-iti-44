#include <stdio.h>

int previous1 = 1;
int previous2 = 0;
int flag = 0;
void fibonacci(int n);

int main()
{
    fibonacci(3);
}

void fibonacci(int n)
{
    if (!flag)
    {
        switch (n)
        {
            case 0:
                printf("Invalid argument.\n");
                return;
            case 1:
                printf("0");
                return;
            default:
                printf("0 1 ");
                flag = 1;
        }
    }

    if (n > 2)
    {
        int sum = previous1 + previous2;
        printf("%d ", sum);

        previous2 = previous1;
        previous1 = sum;
        fibonacci(n-1);
    }
}
