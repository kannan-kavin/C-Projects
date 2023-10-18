#include <cs50.h>
#include <math.h>
#include <stdio.h>

int main(void)
{
    long CCN;
    CCN = get_long("Enter Credit Card Number: ");
  
    int i;
    int runningsum = 0;
    for(d = 0; CCN > 0; d++)
    {
        runningsum = runningsum + floor(CCN %);
        printf("sum: %i\n", runningsum);
        CCN = (CCN / 10);
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