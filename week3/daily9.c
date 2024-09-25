/*
 *Author: Jack Ohrn
 *Sept. 25th, 2024
 *Description
 */
#include <stdio.h>
#include <stdlib.h>

void loop_down_to_zero(int num);

void loop_up_to_int(int num);

int main(void)
{
    int input;
    printf("Please print a positive integer \n");
    int check = scanf("%d", &input);

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