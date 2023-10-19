#include <cs50.h>
#include <stdio.h>

int main(void)
{
    long CCN;
    CCN = get_long("Enter Credit Card Number: ");
    long ogCCN = CCN;
    // the ogCCN will be used later to help differentiate between 16 digits Mastercard and Visa
    int d = 0;
    int step1sum = 0;
    int step1helper = 0;
    int step2sum = (CCN % 10);
    for(d = 0; CCN > 0; d++)
    {
        CCN = (CCN / 10);
        if (d % 2 == 0)
        {
            step1helper = (2 * (CCN % 10));
            if (step1helper < 10)
            {
                step1sum = (step1sum + step1helper);
            }
            else
            {
                step1sum = (step1sum + (step1helper / 10) + (step1helper % 10));
            }
        }
        else
        {
            step2sum = (step2sum + (CCN % 10));
        }
        // printf("step1sum: %i, step2sum: %i\n", step1sum, step2sum);
    }
    // printf("digits: %i\n", d)
    // step1sum keeps track of Step 1 (every other digit added together starting from the second on the right)
    // step2 keeps track of Step 2 (every other digit added together starting from the first digit on the right)
    // d keeps track of digits in the card
    if (((step2sum + step1sum) % 10) == 0)
    {
        if (d == 13)
        {
        printf("VISA\n");
        }
        else if (d == 15)
        {
        printf("AMEX\n");
        }
        else if (d == 16)
        {
        // printf("VISA OR MASTERCARD\n");
        // printf("%ld\n", ogCCN);
            if ((ogCCN / 1000000000000000) == 4)
            {
                printf("VISA\n");
            }
            else
            {
                printf("MASTERCARD\n");
            }
        }
        else
        {
            printf("INVALID\n");
        }
    }
    else
    {
        printf("INVALID\n");
    }
}