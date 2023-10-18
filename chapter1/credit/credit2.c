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
        runningsum = (runningsum + (CCN % 10));
        printf("sum: %i digits: %i\n", runningsum, d);
    }

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