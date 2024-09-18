/*
 *Jack Ohrn
 *Sept.17 2024

 *This program calls the function 'smile' from 'main' three times to print three smiley faces with no arguments and parameters passed.
*/
#include <stdio.h>

/*
 *The function 'smile' is called by 'main' which outputs a smiley face to the terminal
 *three times using a series of 'printf' statements. Return type is void, no arguments taken.
 */
void smile(void);

/*
 *'main' is the entry point to the program and calls the function 'smile' three times to
 *print three smiley faces. Return type is an integer (int), and no parameters included.
 */

int main(void)
{
    smile();
    printf("\n");
    smile();
    printf("\n");
    printf("\n");
    smile();
    return 0;
}

void smile(void)
{
    printf("     **** \n");
    printf("  *   .  . *\n");
    printf(" *          *\n");
    printf(" *    \\_/   *\n");
    printf("  *        *\n");
    printf("     **** \n");
}