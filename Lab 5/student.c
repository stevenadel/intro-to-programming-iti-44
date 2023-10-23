#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <dos.h>
#include <dir.h>
#include "standard.h"

void scan_struct_Students(struct student s[], int student_num, int input_num)
{
    for (int i = 0; i < input_num; i++)
    {
        printf("Enter name [%d]: ", student_num + 1);
        scanf(" %[^\n]s", s[student_num].name);
        printf("Enter age [%d]: ", student_num + 1);
        scanf("%d", &s[student_num].age);
        printf("Enter ID [%d]: ", student_num + 1);
        scanf("%d", &s[student_num].id);
        printf("Enter Gender [%d]: ", student_num + 1);
        scanf(" %c", &s[student_num].gender);
        student_num++;
    }
    //printf("Press ESC to go back to main menu.");
    return student_num;
}

void print_struct_Students(struct student s[], int student_num)
{
    printf("----------------- Display --------------------\n\n");
    for(int i = 0; i < student_num; i++)
    {
        printf("name[%d] = %s \n", i+1, s[i].name);
        printf("gender[%d] = %c \n", i+1, s[i].gender);
        printf("age [%d]=  %d \n", i+1, s[i].age);
        printf("id [%d] =  %d \n", i+1, s[i].id);
        printf("\n");
    }
}

