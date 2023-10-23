#include<stdio.h>

void main()
{
    int n = 0;
    printf("Choose number of elements: ");
    scanf("%d", &n);

    int elements[n];
    for (int i = 0; i < n; i++)
    {
        printf("\nInput each element integer: ");
        scanf(" %d", &elements[i]);
    }

    printf("\nInput order:");
    for (int j = 0; j < n; j++)
    {
        printf(" %d", elements[j]);
    }
}
