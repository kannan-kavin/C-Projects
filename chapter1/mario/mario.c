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
    int j;
    for
    {
        for (i = 1; i <= height; i++)
        {
            if (i == height)
            {
                printf("#");
            }
            else
            {
                printf("-");
            }
        }
        printf("\n");
    // printf("\n", i);
        }
    }
        for (i = 1; i <= height; i++)
        {
            if (i == height)
         {
              printf("#");
         }
          else
          {
              printf("-");
           }
     }
    printf("\n");
    // printf("\n", i);
}