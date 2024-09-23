/*
 *Author: Jack Ohrn
 *Sept.22 2024

 *This program uses recursion to *If we pass too large of a number to either function, we get a buffer overflow.('zsh: segmentation fault')
*/

#include <stdio.h>
#include <stdlib.h>

void print_binary(int scanNum);
;

int main(void)
{
    int originalNum;
    printf("type number to convert to binary. \n");
    scanf("%d", &originalNum);
    print_binary(originalNum);
    return 0;
}

void print_binary(int scanNum)
{

    if (scanNum > 1)
    {
        print_binary(scanNum / 2);
    }
    printf("%d->%d", scanNum, scanNum % 2);
}