#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void)
{
    int age;
    printf("\nhow old r u?\n");
    scanf("%d", &age);
    if (age > 4)
    {
        printf("youre old as shit");
    }
    else
    {
        printf("hell nah");
    }

    printf("you are %d years old", age);

    return 0;
}