/*
 *Author: Jack Ohrn
 *Oct. 8th, 2024
 *Given two users input, the winner of the rock paper scissors game is determined.
 Time spent: ~1 hour
 */
#include <stdio.h>
#include <stdlib.h>

// Clears the keyboard buffer
void clear_buffer(void);
// the input_validation() function is implemented to keep the code clean and use less repetition.
int input_validation(char);
// results() is passed two arguments, and properly determines which player won.
void results(char, char);

int main(int argc, char *argv[])
{
    char playerOneInput;
    char playerTwoInput;
    printf("Player 1 it's your turn!\n Please choose (r)ock, (p)aper, or (s)cissors: ");
    scanf("%c", &playerOneInput);
    clear_buffer();
    while (input_validation(playerOneInput))
    {
        printf("invalid code! re enter.");
        scanf("%c", &playerOneInput);
        clear_buffer();
    }
    printf("Player 2 it's your turn!\n Please choose (r)ock, (p)aper, or (s)cissors: ");
    scanf("%c", &playerTwoInput);
    clear_buffer();
    while (input_validation(playerTwoInput))
    {
        printf("invalid code! re enter.");
        scanf("%c", &playerTwoInput);
        clear_buffer();
    }
    // printf("Player one, you chose: %c \n player two you chose %c", playerOneInput, playerTwoInput);
    results(playerOneInput, playerTwoInput);
    return 0;
}

int input_validation(char testValue)
{
    if (testValue != 'r' && testValue != 'R' && testValue != 'p' && testValue != 'P' && testValue != 's' && testValue != 'S')
    {
        return 1;
    }
    return 0;
}

void results(char playerOne, char playerTwo)
{
    if (playerOne == playerTwo)
    {
        printf("It's a tie!");
    }
    else if ((playerOne == 'r' && playerTwo == 's') || (playerOne == 'p' && playerTwo == 'r') || (playerOne == 's' && playerTwo == 'p'))
    {
        printf("Player one wins!");
    }
    else
    {
        printf("Player two wins!");
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