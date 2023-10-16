#include <cs50.h>
#include <math.h>
#include <stdio.h>

int main(void)
{
    long CCN;
    CCN = get_long("Enter Credit Card Number: ");
    if ((CCN / 1000000000000000 > 1))
    // 16 Digit Cards
    {
        //printf("MASTERCARD OR VISA\n");
        int VISA16 = (floor(CCN / 1000000000000000));
        int MASTERCARD16 = (floor(CCN / 100000000000000));
        if (VISA16 == 4)
        {
            //printf("VISA\n");
            int c1 = (floor(CNN % 10) / 1);
            int c2 = 2 * (floor(CCN % 100) / 10);
            int c3 = (floor(CNN % 1000) / 100);
            int c4 = 2 * (floor(CCN % 10000) / 1000);
            int c5 = (floor(CNN % 100000) / 10000);
            int c6 = 2 * (floor(CCN % 1000000) / 100000);
            int c7 = (floor(CNN % 10000000) / 1000000);
            int c8 = 2 * (floor(CCN % 100000000) / 10000000);
            int c9 = (floor(CNN % 1000000000) / 100000000);
            int c10 = 2 * (floor(CCN % 10000000000) / 1000000000);
            int c11 = (floor(CNN % 100000000000) / 10000000000);
            int c12 = 2 * (floor(CCN % 1000000000000) / 100000000000);
            int c13 = (floor(CNN % 10000000000000) / 1000000000000);
            int c14 = 2 * (floor(CCN % 100000000000000) / 10000000000000);
            int c15 = (floor(CNN % 1000000000000000) / 100000000000000);
            int c16 = 2 * (floor(CCN % 10000000000000000) / 1000000000000000);
            //printf("Each one is: %i, %i, %i, %i, %i, %i, %i, %i\n", check1, check2, check3, check4, check5, check6, check7, check8);
            int step1 = ((c2 / 10) + (c2 % 10) + (c4 / 10) + (c4 % 10) + (c6 / 10) + (c6 % 10) + (c8 / 10) + (c8 % 10) + (c10 / 10) + (c10 % 10) + (c12 / 10) + (c12 % 10) + (c14 / 10) + (c14 % 10) + (c16 / 10) + (c16 % 10));
            int step2 = (step1 + c1 + c3 + c5 + c7 + c9 + c11 + c13 + c15);
            int step3 = (step2 % 10);
            if (step3 = 0)
            {
                printf("VISA\n");
            }
        }
        else if (MASTERCARD16 == 51 || MASTERCARD16 == 52 || MASTERCARD16 == 53 || MASTERCARD16 == 54 || MASTERCARD16 == 55)
        {
            //printf("MASTERCARD\n");
        }
        else
        {
            //printf("INVALID\n");
        }
    }
    else if ((CCN / 100000000000000) > 1)
    // 15 Digit Cards
    {
        //printf("AMERICAN EXPRESS\n");
    }
    else if ((CCN / 1000000000000) > 1)
    // 13 Digit Cards
    {
        //printf("VISA\n");
    }
    else
    {
        printf("INVALID\n");
    }
}