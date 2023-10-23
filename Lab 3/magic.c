#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include <time.h>

void gotoxy(int x,int y);

int main()
{
    int size = 0;
    printf("Choose magic square size: ");
    scanf("%d", &size);

    if (0 == size % 2 || 0 == size)
    {
        printf("Please choose an odd number: ");
        return 1;
    }

    // Always start with 1 at middle of first row
    int col = (size + 1) / 2;
    int row = 1;
    int grid = size * size;
    for (int counter = 1; counter <= grid; counter++)
    {
        gotoxy(col * 5, row);
        printf("%5d", counter);
        sleep(3);

        if (0 == counter % size)
        {
            row++;
            if (row > size)
            {
                row = 1;
            }
        }
        else
        {
            col--;
            row--;
            if (0 == col)
            {
                col = size;
            }
            if (0 == row)
            {
                row = size;
            }
        }
    }
}

void gotoxy(int x,int y)
{
    COORD coord={0,0};
    coord.X=x;
    coord.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}
