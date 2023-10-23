#include <stdio.h>
#define ROW 2
#define COL 3

int main()
{
    int arr[ROW][COL]  = {{2,4,9},{4,5,7}};
    int sum = 0;
    int average = 0;

    for (int i = 0; i < COL; i++)
    {
        for (int j = 0; j < ROW; j++)
        {
            sum += arr[j][i];
        }
        average = sum / COL;
        printf("Average for column %d is %d\n", i+1, average);
        sum = 0;
        average = 0;
    }
}
