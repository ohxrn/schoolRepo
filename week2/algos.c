/*
 *Author: Jack Ohrn
 *Date
 *Description
 */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    // TODO: Write your code here
    printf("what's your name? \n");
    char name[50];
    scanf(" %50s", name);
    printf("---------------\nHi, %s! \n", name);
    return 0;
}