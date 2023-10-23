#include <stdio.h>

int main() {
    int num;
    printf("Choose a number: ");
    int proper_input = scanf("%d", &num);

    if (!proper_input) {
        printf("Please insert a number.\n");
        return 1;
    }

    if (num > 0) {
        printf("Positive\n");
    }
    else if (num < 0) {
        printf("Negative\n");
    }
    else {
        printf("Zero\n");
    }
}