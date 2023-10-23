#include <stdio.h>
#include <math.h>

int main()
{
    int x,y;
    printf("Input two numbers: ");
    if (2 != scanf("%d %d", &x, &y))
    {
        printf("Please input a two numbers.\n");
        return 1;
    }

    char mode;
    printf("Input operator: ");
    scanf(" %c", &mode);
    if (mode != '+' && mode != '-'
     && mode != '*' && mode != '/')
    {
        printf("Please choose operator from: + - * /\n");
        return 1;
    }
    if (0 == y && '/' == mode)
    {
        printf("Cannot divide by zero.\n");
        return 1;
    }

    switch (mode)
    {
        case '+':
            printf("%d\n", x+y);
            break;
        case '-':
            printf("%d\n", x-y);
            break;
        case '*':
            printf("%d\n", x*y);
            break;
        case '/':
            printf("%d\n", x/y);
            break;
    }
}

