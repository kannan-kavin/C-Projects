#include <cs50.h>
#include <math.h>
#include <stdio.h>

int main(void)
{
    long CCN;
    CCN = get_long("Enter Credit Card Number: ");

    int i;
    int d;
    int runningsum = 0;
    for(i = 2; i > d; i += 2)
    {
        runningsum = runningsum + floor(CCN %);
        printf("sum: %i\n", runningsum);
        d++;
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