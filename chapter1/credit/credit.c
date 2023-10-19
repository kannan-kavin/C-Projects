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
    for (d = 0; CCN > 0; d++)
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
        int VISA1 = (ogCCN / 1000000000000);
        // 13 digit cards beginning with 4
        int AMEX2 = (ogCCN / 10000000000000);
        // 15 digit cards begining with 34 and 37
        int VISA1v2 = (ogCCN / 1000000000000000);
        // 16 digit cards beginning with 4
        int MASTER2 = (ogCCN / 100000000000000);
        // 16 digit card beginning with 51, 52, 53, 54, and 55
        if (VISA1 == 4)
        {
            printf("VISA\n");
        }
        else if (AMEX2 == 34 || AMEX2 == 34)
        {
            printf("AMEX\n");
        }
        else if (VISA1v2 == 4)
        {
            printf("VISA\n");
        }
        else if (MASTER2 == 51 || MASTER2 == 52 || MASTER2 == 53 || MASTER2 == 54 || MASTER2 == 55)
        {
            printf("MASTERCARD\n");
        }
        else
        {
            printf("INVALID\n");
            printf("VISA1:%i\n", VISA1);
            printf("AMEX2:%i\n", AMEX2);
            printf("VISA1v2:%i\n", VISA1v2);
            printf("MASTER2:%i\n", MASTER2);
        }
    }
    else
    {
        printf("INVALID\n");
    }
}