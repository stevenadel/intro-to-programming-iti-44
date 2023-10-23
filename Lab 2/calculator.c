#include <stdio.h>
void calculate(int x, int y, char mode);

int main()
{
    int x,y;
    char sign;

    printf("Input first number: ");
    int proper_num1 = scanf("%d", &x);

    if (!proper_num1) {
        printf("Please input valid number.\n");
        return 1;
    }

    printf("Input second number: ");
    int proper_num2 = scanf(" %d", &y);

    if (!proper_num2) {
        printf("Please input valid number.\n");
        return 1;
    }

    printf("Input operator: ");
    scanf(" %c", &sign);

    if (!(sign == '+' || sign == '-' || sign == '*' || sign == '/'))
    {
        printf("Operator must be either: + - * /\n");
        return 1;
    }
    if (y == 0 && sign == '/') {
        printf("Cannot divide by zero.\n");
        return 1;
    }

    calculate(x, y, sign);
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
            printf("%f\n", (float) x / y);
    }
}