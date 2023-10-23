#include <stdio.h>

int main()
{
    printf("Enter firstname: ");
    char first[50] = "";
    int scan = scanf("%s", first);

    printf("Enter lastname: ");
    char last[50] = "";
    scanf("%s", last);

    printf("Fullname: %s %s\n", first, last);

}
