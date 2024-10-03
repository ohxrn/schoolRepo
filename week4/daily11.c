/*
 *Author: Jack Ohrn
 *Date
 *Description
 */
#include <stdio.h>
#include <stdlib.h>

void draw_line(int num);
void clear_buffer(void);

int main(void)
{
    printf("please enter the number of asterisks in your line: ");
    int num;
    int testVal = scanf("%d", &num);
    clear_buffer();
    while (testVal < 1 || num > 79 || num < 1)
    {
        printf("I'm sorry, that number is unrecognized or out of range, try [1-79]:");
        testVal = scanf("%d", &num);
        clear_buffer();
    }
    draw_line(num);
    return 0;
}

void draw_line(int num)
{
    while (num > 0)
    {
        printf("*");
        num--;
    }
}

void clear_buffer(void)
{
    char c;
    scanf("%c", &c);
    while (c != '\n')
    {
        scanf("%c", &c);
    }
}