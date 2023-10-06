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
    while (height > 8 || height < 1);
    // printf("Height: %i\n", height);
    int i;
    for (i = 0; i < height; i++)
    {
        if (i == height)
        {
            printf("#");
        }
        else
        {
            printf(" ");
        }
    }
}