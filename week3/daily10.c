/*
 *Author: Jack Ohrn
 *Sept. 29th
 *This program prompts the user to input a negativer integer,
 *and uses input validation to ask a user to re enter if int is positive, or a character, etc.
 -
*Time spent: ~15 Minutes
 */
#include <stdio.h>
#include <stdlib.h>

// this function clears the keyboard buffer for scanf() to properly function.
void clear_buffer(void);

int main(void)
{
    int num;
    printf("insert a negative integer: \n");
    int result = scanf("%d", &num);
    clear_buffer();
    while (result == 0 || num >= 0)
    {
        printf("int needs to be negative. Enter again \n");
        result = scanf("%d", &num);
        clear_buffer();
    }
    printf("the negative integer was: %d \n", num);
    return 0;
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