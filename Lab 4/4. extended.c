#include <stdio.h>

int main()
{
    printf("Enter firstname: ");
    char first[50] = "";
    if (!scanf("%s", first))
    {
        printf("Enter a string.\n");
    }

}
