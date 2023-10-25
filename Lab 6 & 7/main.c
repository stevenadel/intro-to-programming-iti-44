#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <dos.h>
#include <dir.h>
#include "editor.h"

int main()
{
    int position = 0, size = 1, flag = 1;
    int* position_ptr = &position;
    int* size_ptr = &size;
    char text[100] = "";
    char cursor;

    print_editor();
    while (flag)
    {
        cursor = getch();
        switch (cursor)
        {
            case EXTENDED:
                switch (getch())
                {
                    case RIGHT:
                        next_position(RIGHT, position_ptr, size);
                        break;
                    case LEFT:
                        next_position(LEFT, position_ptr, size);
                        break;
                    case HOME:
                        position = 0;
                        gotoxy(START_X,START_Y);
                        break;
                    case END:
                        position = size - 1;
                        gotoxy(position,START_Y);
                        break;
                }
                break;
            case BACKSPACE:
                goback(text, position_ptr, size_ptr);
                break;
            case ENTER:
                gotoxy(START_X,10);
                printf("Text you entered: %s \n\n\n", text);
                flag = 0;
                break;
            case ESC:
                system("cls");
                gotoxy(START_X,0);
                printf("Program will exit.\n");
                printf("Goodbye! \n\n\n");
                sleep(2);
                flag = 0;
                break;
            default:
                printf("%c", cursor);
                text[position] = cursor;
                text[size] = '\0';
                position++;
                size++;
        }
    }
}
