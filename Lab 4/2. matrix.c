#include <stdio.h>
#define ROW 3
#define COL 3

int main()
{
    int matrix1[ROW][COL]  = {{2,4,9},{4,5,7},{3,7,5}};
    int matrix2[ROW][COL]  = {{1,9,6},{8,3,2},{6,4,8}};
    int result[ROW][COL];

    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COL; j++)
        {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
            printf("%d  ", result[i][j]);
        }
        printf("\n");
    }
}
