#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <dos.h>
#include <dir.h>
#include "editor.h"

void gotoxy(int x, int y)
{
    COORD coord={0,0};
    coord.X=x;
    coord.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}

void print_editor()
{
    printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++\n");
    printf("---------- Welcome to Steven's line editor ----------\n");
    printf("+++++++++++++++++++++++++++++++++++++++++++++++++++++");
    gotoxy(START_X,5);
    printf("Enter text below: (Press Enter to print & ESC to exit)");
    gotoxy(START_X,START_Y);
}

void next_position(int direction, int* position_ptr, int size)
{
    switch (direction)
    {
        case RIGHT:
            (*position_ptr)++;
            break;
        case LEFT:
        case BACKSPACE:
            (*position_ptr)--;
            break;
    }

    if (*position_ptr < 0)
    {
        *position_ptr = 0;
    }
    else if (*position_ptr == size)
    {
        (*position_ptr)--;
    }

    gotoxy(*position_ptr,START_Y);
}

void goback(char text[], int* position_ptr, int* size_ptr)
{
    next_position(BACKSPACE, position_ptr, *size_ptr);

    int i = *position_ptr;
    while (i < *size_ptr)
    {
        ('\0' == text[i+1]) ? (text[i] = '\0') : (text[i] = text[i+1]);
        i++;
    }
    (*size_ptr)--;

    system("cls");
    print_editor();
    printf("%s", text);
    gotoxy(*position_ptr,START_Y);
}
