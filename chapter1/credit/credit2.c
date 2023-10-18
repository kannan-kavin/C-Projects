#include <cs50.h>
#include <stdio.h>

int main(void)
{
    long CCN;
    CCN = get_long("Enter Credit Card Number: ");
    int step1sum = 0;
    int step1helper = 0;
    int step2sum = (CCN % 10);
    for(int d = 0; CCN > 0; d++)
    {
        CCN = (CCN / 10);
        if (d % 2 == 0)
        {
            step1helper = (step1helper + (CCN % 10));
            if (step1helper < 10)
            {
                step1sum = step1helper +
            }
            else (step1helper >= 10)
            {
                step1helper = (step1helper / 10) + (step1helper % 10);
            }
        }
        else
        {
            step2sum = (step2sum + (CCN % 10));
        }
        printf("step1sum: %i, step2sum: %i\n", step1sum, step2sum);
    }
    // printf("digits: %i\n", d)
    // step1 keeps track of Step 1 (every other digit added together starting from the second (we'll multiply by 2 later))
    // step2 keeps track of Step 2 (every other digit added together)
    // d keeps track of digits in the card

    if (d == 13)
    {
        printf("VISA\n");
    }
    else if (d == 15)
    {
        printf("AMERICAN EXPRESS\n");
    }
    else if (d == 16)
    {
        printf("VISA OR MASTERCARD\n");
    }
    else
    {
        printf("INVALID\n");
    }
}