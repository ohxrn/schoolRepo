/*
 *Author: Jack Ohrn
 *Date
 *DAILY 8---Takes an input scanned by scanf and returns new integer based off conditional.
 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int x;
    printf("enter an integer \n");
    scanf("%d", &x);
    if (x % 2 == 0)
    {
        x = x / 2;
    }
    else
    {
        x = (x * 3) + 1;
    }
    printf("the next value of the number is %d", x);
    return 0;
}
