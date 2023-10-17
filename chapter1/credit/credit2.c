#include <cs50.h>
#include <math.h>
#include <stdio.h>

int main(void)
{
    long CCN;
    CCN = get_long("Enter Credit Card Number: ");
    int c1 = (floor(CCN % 10) / 1);
    int c2 = (floor(CCN % 100) / 10);
    int c3 = (floor(CCN % 1000) / 100);
    int c4 = (floor(CCN % 10000) / 1000);
    int c5 = (floor(CCN % 100000) / 10000);
    int c6 = (floor(CCN % 1000000) / 100000);
    int c7 = (floor(CCN % 10000000) / 1000000);
    int c8 = (floor(CCN % 100000000) / 10000000);
    int c9 = (floor(CCN % 1000000000) / 100000000);
    int c10 = (floor(CCN % 10000000000) / 1000000000);
    int c11 = (floor(CCN % 100000000000) / 10000000000);
    int c12 = (floor(CCN % 1000000000000) / 100000000000);
    int c13 = (floor(CCN % 10000000000000) / 1000000000000);
    int c14 = (floor(CCN % 100000000000000) / 10000000000000);
    int c15 = (floor(CCN % 1000000000000000) / 100000000000000);
    int c16 = (floor(CCN % 10000000000000000) / 1000000000000000);
    printf("Each one is: %i, %i, %i, %i, %i, %i, %i, %i\n", c1, c2, c3, c4, c5, c6, c7, c8);
    if (((CCN / 1000000000000000) > 1) && (c16 == 4))
    // 16 Digit Visa
    {
        printf("VISA\n");
    }
    else if (((CCN / 1000000000000000) > 1) && (((c16 * 10) + c15) == 51) || (((c16 * 10) + c15) == 52) || (((c16 * 10) + c15) == 53) || (((c16 * 10) + c15) == 54) || (((c16 * 10) + c15) == 55))
    {
        printf("MASTERCARD\n");
    }
    else if (((CCN / 100000000000000) > 1) && (((c15 * 10) + c14) == 34) || (((c15 * 10) + c14) == 37))
    {
        printf("AMERICAN EXPRESS\n");
    }
    else if (((CCN / 1000000000000) > 1) && (c13 == 4))
    {
        printf("VISA\n");
    }
    else
    {
        printf("INVALID\n");
    }
}