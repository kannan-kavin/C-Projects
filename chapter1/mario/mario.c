#include <cs50.h>
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
    // used to get an input between 1 and 8 inclusive for our height

    int i;
    // used to separate each row from the next
    int j;
    // used to calculate hashes per row
    int k;
    // used to calculate spaces per row
    for (i = 0; i < height; i++)
    {
        for (j = 1; j < (height - i); j++)
        {
            printf("-");
        }
        for (k = 0; k <= (height - j); k++)
        {
            printf("#");
        }
        printf("\n");
    }
}