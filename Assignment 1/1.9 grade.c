#include <stdio.h>
#include <math.h>

int main()
{
    int grade;
    printf("Input grade: ");
    if (1 != scanf("%d", &grade) || grade < 0 || grade > 100)
    {
        printf("Please input a valid grade.\n");
        return 1;
    }

    if (grade < 50)
    {
        printf("Fail\n");
    }
    else if (grade < 65)
    {
        printf("Pass\n");
    }
    else if (grade < 75)
    {
        printf("Good\n");
    }
    else if (grade < 85)
    {
        printf("Very Good\n");
    }
    else
    {
        printf("Excellent\n");
    }
}

