/*
 *Author: Jack Ohrn
 *Date
 *Description
 */
#include <stdio.h>
#include <stdlib.h>

int calcScore(char playerOne);
void clear_buffer(void);
int main(void)
{
    char playerInput;
    printf("Player 1, it's your turn! \n Please choose (r)ock, (p)aper, or (s)cissors");
    int val = scanf("%c", &playerInput);
    clear_buffer();
    while (val != 1 || (playerInput != 'r' && playerInput != 'R' && playerInput != 'p' && playerInput != 'P' && playerInput != 's' && playerInput != 'S'))
    {
        printf("I'm sorry, but you must enter 'r', 'p', or 's' \nPlease choose (r)ock, (p)aper, or (s)cissors: ");
        val = scanf("%c", &playerInput);
        clear_buffer();
    }

    calcScore(playerInput);
    return 0;
}

int playerValidation(char letters)
{
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