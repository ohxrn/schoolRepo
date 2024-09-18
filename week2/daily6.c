/*
 *Author: Jack Ohrn
 *Sept.18 2024

 *This program practices recursion to print 10->0 then 0->10
 *If we pass too large of a number to either function, we get a buffer overflow.('zsh: segmentation fault')
*/

#include <stdio.h>

/*
 *This function is passed an integer from main and decrements until it doesn't satisfy the conditional.
 */
void recursive_down_to_zero(int num);

/*
 *This function is passed an integer from main and increments until it doesn't satisfy the conditional.
 */
void recursive_up_to_int(int num);

int main(void)
{
    recursive_down_to_zero(10);
    printf("****\n");
    recursive_up_to_int(0);
    return 0;
}

void recursive_down_to_zero(int num)
{
    if (num >= 0)
    {
        printf("%d\n", num);
        recursive_down_to_zero(num - 1);
    }
}
void recursive_up_to_int(int num)
{
    if (num <= 10)
    {
        printf("%d\n", num);
        recursive_up_to_int(num + 1);
    }
}