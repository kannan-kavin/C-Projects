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

    int i;
    // used to calculate spaces per row
    int j;
    // used to calculate hashes per row
    int k;
    for (i = 0; i < height; i++)
    {
        for (j = 1; j < (height - i); j++)
        {
           printf("-");
        }
        // I DONT KNOW WHATS HAPPENING HERE
        for (k = 1; k == height; k++)
        {
            printf("#");
        }
        printf("\n");
    }
}
