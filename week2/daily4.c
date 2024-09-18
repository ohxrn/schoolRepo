/*
 *Jack Ohrn
 *Sept.15 2024

 *This program works with different types of format specifiers and variable types to print values.
*/

#include <stdio.h>

int main(int argc, char *argv[])
{
    int entry = 42;
    char letter = 'J';
    // below-I would typically use a double instead of a float for accuracy, but for sake of the assignment I'll assign using a float
    float pi = 3.14159265358;
    char ampersan = '%';
    //
    printf("%d is an integer and should be printed using %cd.\n", entry, ampersan);
    printf("The character \'%c\' can be printed using %cc.\n", letter, ampersan);
    printf("Floating point numbers use %cf. %.5f is an example.\n", ampersan, pi);
    return 0;
}