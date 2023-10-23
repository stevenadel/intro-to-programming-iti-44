#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <dos.h>
#include <dir.h>
#include "standard.h"
#include "menu.h"
#include "student.h"

int main()
{
    int position = 0, submenu = 0, student_num = 2;
    struct student students[100];
    char cursor;

    print_menu(position);
    while (1)
    {
        cursor = getch();
        if (EXTENDED == cursor && !submenu)
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
        else if (ENTER == cursor && !submenu)
        {
            print_submenu(position, students, student_num);
            submenu = 1;
        }
        else if (ESC == cursor)
        {
            print_menu(position);
            submenu = 0;
        }
    }
}
