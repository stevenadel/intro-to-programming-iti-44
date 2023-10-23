#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <dos.h>
#include <dir.h>
#include "menu.h"

int main()
{
    int position = 0;
    char cursor;
    print_menu(0);
    while (1)
    {
        cursor = getch();
        if (EXTENDED == cursor)
        {
            switch (getch())
            {
                case UP:
                    position = next_position(position, UP);
                    print_menu(position);
                    break;
                case DOWN:
                    position = next_position(position, DOWN);
                    print_menu(position);
                    break;
                case RIGHT:
                    position = next_position(position, RIGHT);
                    print_menu(position);
                    break;
                case LEFT:
                    position = next_position(position, LEFT);
                    print_menu(position);
                    break;
             }
        }
        else if (ENTER == cursor)
        {
            print_submenu(position);
        }
    }
}
