#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(int argc, char *argv[])
{
    char box[] = "final number is:\t";
    double x = 1111111.23;
    double y = 212123.131231;
    double xy = (x * y) / 2.12819;
    printf("%s, %.20lf", box, xy);

    return 0;
}