#define RED 4
#define WHITE 15

#define LAST_MENUENTERY 2

#define EXTENDED -32
#define ENTER 13
#define ESC 27
#define UP 72
#define DOWN 80
#define RIGHT 77
#define LEFT 75

int student_num = 0;

void SetColor(int ForgC)
{
    WORD wColor;
    HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_SCREEN_BUFFER_INFO csbi;

    //We use csbi for the wAttributes word.
    if(GetConsoleScreenBufferInfo(hStdOut, &csbi))
    {
        //Mask out all but the background attribute, and add in the forgournd     color
        wColor = (csbi.wAttributes & 0xF0) + (ForgC & 0x0F);
        SetConsoleTextAttribute(hStdOut, wColor);
    }
    return;
}

void gotoxy(int x, int y)
{
    COORD coord={0,0};
    coord.X=x;
    coord.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}

void print_menu(int position)
{
    system("cls");
    switch (position)
    {
        case 0:
            gotoxy(10, 5);
            SetColor(RED);
            printf("New");
            gotoxy(10, 10);
            SetColor(WHITE);
            printf("Display");
            gotoxy(10, 15);
            printf("Exit");
            gotoxy(10, 5);
            break;
        case 1:
            gotoxy(10, 5);
            SetColor(WHITE);
            printf("New");
            gotoxy(10, 10);
            SetColor(RED);
            printf("Display");
            gotoxy(10, 15);
            SetColor(WHITE);
            printf("Exit");
            gotoxy(10, 10);
            break;
        case 2:
            gotoxy(10, 5);
            SetColor(WHITE);
            printf("New");
            gotoxy(10, 10);
            printf("Display");
            gotoxy(10, 15);
            SetColor(RED);
            printf("Exit");
            gotoxy(10, 15);
            break;
    }
}

void print_submenu(int position, struct student students[])
{
    system("cls");
    gotoxy(0, 0);
    SetColor(WHITE);

    switch (position)
    {
        case 0:
            print_new(students);
            break;
        case 1:
            print_display(students);
            break;
        case LAST_MENUENTERY:
            printf("Program will exit now\n");
            sleep(1);
            SetColor(WHITE);
            exit(0);
            }
}

void print_new(struct student students[])
{
    student_num += scan_struct_Students(students, student_num, 1);
}

void print_display(struct student students[])
{
    print_struct_Students(students, student_num);
}

int next_position(int position, int direction)
{
    switch (direction)
    {
        case UP:
            position--;
            break;
        case DOWN:
            position++;
            break;
        case RIGHT:
            position++;
            break;
        case LEFT:
            position--;
            break;
    }

    if (position < 0)
    {
        position = LAST_MENUENTERY;
    }
    if (position > LAST_MENUENTERY)
    {
        position = 0;
    }

    return position;
}
