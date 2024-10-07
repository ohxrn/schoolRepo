/*
 *Author: Jack Ohrn
 *October 3rd, 2024
 *Purpose: Takes an integer input from 1-79 then prints the same number of
asterisks in a row. If not 1-79 then falls into while loop until correct input is given
*Time spent: ~30 mins
 */
#include <stdio.h>
#include <stdlib.h>

/*
draw_line() takes an int num from main and converts the int to X amount of asterisks printed in terminal.
*/
void draw_line(int num);
/*
clear_buffer() clears keyboard buffer for proper input values.
*/
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
    printf("\n");
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