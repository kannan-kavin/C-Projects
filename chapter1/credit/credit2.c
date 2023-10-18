#include <cs50.h>
#include <math.h>
#include <stdio.h>

int main(void)
{
    long CCN;
    CCN = get_long("Enter Credit Card Number: ");
    int d;
    int runningsum = 0;
    for(d = 0; CCN > 0; d++)
    {
        CCN = (CCN / 10);
        if (d % 2 == 0)
        {
            runningsum = (runningsum + (CCN % 10));
        }
        // printf("sum: %i\n", runningsum);
    }
    // printf("digits: %i\n", d)
    // runningsum keeps track of Step 1
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