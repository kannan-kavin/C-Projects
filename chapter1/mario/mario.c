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
    for (i = 1; i <= height; i++)
    {
        for (j = (height--); j > 0; j--)
        {
            if (j > 1)
            {
                printf("-");
            }
        }
        for (k = height; k > 0; k--)
        {
            if (k > 0)
            {
                printf("#");
            }
            // printf("\n", i);
        }
        printf("\n");
    }
}
