/*
 *Author: Jack Ohrn
 *Date
 *Determines winner of rock paper scissors match using struct's and enum types versus daily 12.
 Time spent: ~3 Hours
 */
#include <stdio.h>
#include <stdlib.h>
// declaring enum's and struct
enum choice
{
    ROCK,
    PAPER,
    SCISSORS
};
typedef enum choice Choice;

struct combine
{
    Choice playerOne;
    Choice playerTwo;
};
typedef struct combine Combine;

// func definitions -------------------------------------------------
// getInput() returns valid user input in the form of type Choice which is later used to construct the struct 'combine';
Choice getInput(void);
// clear_buffer() clears the keyboard buffer;
void clear_buffer(void);
// print_results() is passed the Combine struct which then determines the winner of the game;
void print_results(Combine);
// start main---------------------------------------------------------
int main(void)
{
    Combine combine;
    printf("player one it's your turn. \n");
    combine.playerOne = getInput();
    printf("player two, it's your turn! \n");
    combine.playerTwo = getInput();
    print_results(combine);
    return 0;
}

Choice getInput()
{
    char x;
    int validate;
    do
    {

        printf("Please enter your choice (p)aper (r)ock or (s)cissors: ");
        validate = scanf("%c", &x);
        clear_buffer();
        if (validate != 1 || (x != 'r' && x != 'p' && x != 's' && x != 'R' && x != 'P' && x != 'S'))
        {
            printf("invalid input. Try again. \n");
        }

    } while (validate != 1 || (x != 'r' && x != 'p' && x != 's' && x != 'R' && x != 'P' && x != 'S'));

    switch (x)
    {
    case 'r':
    case 'R':
        return ROCK;

    case 'p':
    case 'P':
        return PAPER;

    case 's':
    case 'S':
        return SCISSORS;
    default:
        printf("--SOMETHING WENT WRONG--");
        break;
    }
    return 0;
}
void print_results(Combine combine)
{
    if (combine.playerOne == combine.playerTwo)
    {
        printf("It's a tie. \n");
    }
    else if ((combine.playerOne == ROCK && combine.playerTwo == SCISSORS) || (combine.playerOne == PAPER && combine.playerTwo == ROCK) || (combine.playerOne == SCISSORS && combine.playerTwo == PAPER))
    {
        printf("Player one wins! \n");
    }
    else
    {
        printf("Player two wins! \n");
    }
    char x;
    int valid;
    do
    {
        printf("Do you wish to continue? [y|n]: ");
        valid = scanf("%c", &x);
        clear_buffer();
        if (valid != 1 || (x != 'Y' && x != 'y' && x != 'N' && x != 'n'))
        {
            printf("Invalid input. Try again.\n");
        }
    } while (valid != 1 || (x != 'Y' && x != 'y' && x != 'N' && x != 'n'));
    switch (x)
    {
    case 'Y':
    case 'y':
        main();
        return;
    case 'N':
    case 'n':
        return;
    default:
        printf("shouldn't ever run.");
        break;
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
