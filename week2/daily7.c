/*
 *Author: Jack Ohrn
 *Sept.22 2024

 *DAILY 7----This program uses recursion to print binary representation of entered input.
*/

#include <stdio.h>
#include <stdlib.h>

/*
Sends all calls provided by main func to recursively print out the buinary representation of the input in the correct order because of the call stack mechanics.
*/
void print_binary(int scanNum);

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
    printf("%d", scanNum % 2);
}