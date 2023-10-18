#include <cs50.h>
#include <math.h>
#include <stdio.h>

int main(void)
{
    long CCN;
    CCN = get_long("Enter Credit Card Number: ");
    int d;
    int step1 = 0;
    int step2 = 0;
    for(d = 0; CCN > 0; d++)
    {
        CCN = (CCN / 10);
        if (d % 2 == 0)
        {
            step1 = (step1 + (CCN % 10));
        }
        else
        {
            step2 = (step2 + (CCN % 10));
        }
        printf("step1sum: %i, step2sum: %i\n", step1, step2);
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