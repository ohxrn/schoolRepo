/*
 *Author: Jack Ohrn
 *Sept. 25th, 2024
 *Program asks for a positive int.--> program decrements input to zero,
 *then increments from zero back up to original int value without recursion.
 */
#include <stdio.h>
#include <stdlib.h>

/*
 *This function takes an integer argument from main
 *and decrements down to zero. Return type is void.
 */
void loop_down_to_zero(int num);
/*
 *This function takes original integer from main, and increments from zero back to the passed int.
 */
void loop_up_to_int(int num);

int main(void)
{
    int input;
    printf("Please print a positive integer: ");
    scanf("%d", &input);
    loop_down_to_zero(input);
    printf("**** \n");
    loop_up_to_int(input);

    return 0;
}

void loop_down_to_zero(int num)
{
    while (num >= 0)
    {
        printf("%d\n", num);
        num--;
    }
}

void loop_up_to_int(int num)
{
    int inc = 0;
    while (inc <= num)
    {
        printf("%d\n", inc);
        inc++;
    }
}