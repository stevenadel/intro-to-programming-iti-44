#define START_X 0
#define START_Y 6

#define BACKSPACE 8
#define ENTER 13
#define ESC 27

#define EXTENDED -32
#define HOME 71
#define END 79
#define UP 72
#define LEFT 75
#define RIGHT 77
#define DOWN 80

void gotoxy(int x, int y);
void print_editor();
void next_position(int direction, int* position_ptr, int size);
void goback(char text[], int* position_ptr, int* size_ptr);
