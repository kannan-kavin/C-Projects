#include <cs50.h>
#include <math.h>
#include <stdio.h>

int main(void)
{
    int height;
    do
    {
        height = get_int("Height: ");
    }
    while (1 < height < 8);
    printf("height: %i\n", height);
}