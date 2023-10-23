#include <stdio.h>

int main()
{
    int percentage;
    printf("Input your grade percentage: ");
    scanf("%d", &percentage);

    if (percentage > 100 || percentage < 0) {
        printf("Must input a number between 0-100\n");
        return 1;
    }

    if (percentage >= 85)
    {
        printf("Excellent\n");
    }
    else if (percentage >= 75) {
        printf("Very Good\n");
    }
    else if (percentage >= 65) {
        printf("Good\n");
    }
    else if (percentage >= 50) {
        printf("Pass\n");
    }
    else {
        printf("Fail\n");
    }
}