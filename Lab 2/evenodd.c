#include <stdio.h>

int main() {
    int num;
    printf("Choose a number: ");
    int proper_input = scanf("%d", &num);

    if (num == 0) {
        printf("Zero is neither even nor odd.\n");
        return 1;    
    }

    if (!proper_input) {
        printf("Please input a number.\n");
        return 1;
    }
    
    (num % 2 == 0) ? printf("Even\n") : printf("Odd\n");
}